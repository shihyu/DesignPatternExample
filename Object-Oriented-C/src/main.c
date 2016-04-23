#include <pthread.h>
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"
#include "queue.h"

#define LOOP_TIMES 10

typedef struct ConditionBlockingQueue {
    BlockingQueue* blockingQueue;
    pthread_cond_t cond;
    pthread_mutex_t mutex;
    int count;
} ConditionBlockingQueue;

void produce(ConditionBlockingQueue* cbq)
{
    //pthread_t is unsigned int
    sleep(pthread_self() % 10);
    cbq->blockingQueue->iqueue.add(&cbq->blockingQueue->iqueue,
                                   (int)pthread_self());

    pthread_mutex_lock(&cbq->mutex);
    ++cbq->count;
    pthread_mutex_unlock(&cbq->mutex);
    pthread_cond_signal(&cbq->cond);
}

void producer(ConditionBlockingQueue* cbq)
{
    int i;
    pthread_t tid;

    for (i = 0; i < LOOP_TIMES; ++i) {
        pthread_create(&tid, NULL, (void* (*)(void*))produce, cbq);
    }
}

void consume(ConditionBlockingQueue* cbq)
{
    printf("%d_%u ", cbq->blockingQueue->iqueue.remove(&cbq->blockingQueue->iqueue),
           pthread_self());
    fflush(stdout);

    pthread_mutex_lock(&cbq->mutex);
    ++cbq->count;
    pthread_mutex_unlock(&cbq->mutex);
    pthread_cond_signal(&cbq->cond);
}

void consumer(ConditionBlockingQueue* cbq)
{
    int i;
    pthread_t tid;

    for (i = 0; i < LOOP_TIMES; ++i) {
        pthread_create(&tid, NULL, (void* (*)(void*))consume, cbq);
    }
}

int main()
{
    ArrayList* arrayList = newArrayList(1);

    int i;

    for (i = 0; i < LOOP_TIMES; ++i) {
        arrayList->ilist.push(&arrayList->ilist, i);
    }

    for (i = 0; i < LOOP_TIMES; ++i) {
        printf("%d ", arrayList->ilist.pop(&arrayList->ilist));
    }

    printf("empty: %d\n", arrayList->ilist.empty(&arrayList->ilist));
    printf("\n");

    deleteArrayList(arrayList);

    LinkedList* linkedList = newLinkedList();

    for (i = 0; i < LOOP_TIMES; ++i) {
        linkedList->ilist.push(&linkedList->ilist, i);
    }

    for (i = 0; i < LOOP_TIMES; ++i) {
        printf("%d ", linkedList->ilist.pop(&linkedList->ilist));
    }

    printf("empty: %d\n", linkedList->ilist.empty(&linkedList->ilist));
    printf("\n");

    deleteLinkedList(linkedList);

    LinkedQueue* linkedqueue = newDefLinkedQueue();

    for (i = 0; i < LOOP_TIMES; ++i) {
        linkedqueue->iqueue.add(&linkedqueue->iqueue, i);
    }

    for (i = 0; i < LOOP_TIMES; ++i) {
        printf("%d ", linkedqueue->iqueue.remove(&linkedqueue->iqueue));
    }

    printf("empty: %d\n", linkedqueue->iqueue.empty(&linkedqueue->iqueue));
    printf("\n");

    deleteDefLinkedQueue(linkedqueue);

    BlockingQueue* blockingQueue = newDefBlockingQueue();
    ConditionBlockingQueue cbq = {.blockingQueue = blockingQueue, .count = 0};
    int err = pthread_cond_init(&cbq.cond, NULL);

    if (err) {
        perror(strerror(err));
        exit(1);
    }

    err = pthread_mutex_init(&cbq.mutex, NULL);

    if (err) {
        perror(strerror(err));
        exit(1);
    }

    consumer(&cbq);
    producer(&cbq);

    while (cbq.count < (LOOP_TIMES << 1)) {
        pthread_cond_wait(&cbq.cond, &cbq.mutex);
    }

    pthread_cond_destroy(&cbq.cond);
    pthread_mutex_destroy(&cbq.mutex);

    printf("\n");

    deleteDefBlockingQueue(blockingQueue);

    return 0;
}