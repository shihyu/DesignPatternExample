#include <pthread.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#include "base.h"
#include "queue.h"

static void BlockingQueue_add(IQueue* queue, int elem);
static int BlockingQueue_remove(IQueue* queue);
static int BlockingQueue_empty(IQueue* queue);

BlockingQueue* newBlockingQueue(IQueue* queue)
{
    BlockingQueue* blockingQueue = (BlockingQueue*)malloc(sizeof(BlockingQueue));

    if (blockingQueue == NULL) {
        return NULL;
    }

    blockingQueue->queue = queue;

    int err = pthread_mutex_init(&blockingQueue->mutex, NULL);

    if (err) {
        perror(strerror(err));
        exit(1);
    }

    err = pthread_cond_init(&blockingQueue->cond, NULL);

    if (err) {
        perror(strerror(err));
        exit(1);
    }

    blockingQueue->iqueue.add = BlockingQueue_add;
    blockingQueue->iqueue.remove = BlockingQueue_remove;
    blockingQueue->iqueue.empty = BlockingQueue_empty;

    return blockingQueue;
}

BlockingQueue* newDefBlockingQueue()
{
    LinkedQueue* linkedQueue = newDefLinkedQueue();

    if (linkedQueue == NULL) {
        return NULL;
    }

    return newBlockingQueue(&linkedQueue->iqueue);
}

void deleteBlockingQueue(BlockingQueue* queue)
{
    int err = pthread_cond_destroy(&queue->cond);

    if (err) {
        perror(strerror(err));
    }

    err = pthread_mutex_destroy(&queue->mutex);

    if (err) {
        perror(strerror(err));
    }

    free(queue);
}

void deleteDefBlockingQueue(BlockingQueue* queue)
{
    LinkedQueue* linkedQueue = container_of(queue->queue, LinkedQueue, iqueue);
    deleteLinkedQueue(linkedQueue);
    deleteBlockingQueue(queue);
}

void BlockingQueue_add(IQueue* queue, int elem)
{
    BlockingQueue* blockingQueue = container_of(queue, BlockingQueue, iqueue);
    int err = pthread_mutex_lock(&blockingQueue->mutex);

    if (err) {
        perror(strerror(err));
    }

    blockingQueue->queue->add(blockingQueue->queue, elem);

    err = pthread_mutex_unlock(&blockingQueue->mutex);

    if (err) {
        perror(strerror(err));
    }

    err = pthread_cond_signal(&blockingQueue->cond);

    if (err) {
        perror(strerror(err));
    }
}

int BlockingQueue_remove(IQueue* queue)
{
    BlockingQueue* blockingQueue = container_of(queue, BlockingQueue, iqueue);
    int err = pthread_mutex_lock(&blockingQueue->mutex);

    if (err) {
        perror(strerror(err));
    }

    while (blockingQueue->iqueue.empty(&blockingQueue->iqueue)) {
        err = pthread_cond_wait(&blockingQueue->cond, &blockingQueue->mutex);

        if (err) {
            perror(strerror(err));
        }
    }

    int value = blockingQueue->queue->remove(blockingQueue->queue);

    err = pthread_mutex_unlock(&blockingQueue->mutex);

    if (err) {
        perror(strerror(err));
    }

    return value;
}

int BlockingQueue_empty(IQueue* queue)
{
    BlockingQueue* blockingQueue = container_of(queue, BlockingQueue, iqueue);
    return blockingQueue->queue->empty(blockingQueue->queue);
}