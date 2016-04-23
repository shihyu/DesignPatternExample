#include <stdio.h>
#include <stdlib.h>

#include "base.h"
#include "list.h"
#include "queue.h"

static void LinkedQueue_add(IQueue* queue, int elem);
static int LinkedQueue_remove(IQueue* queue);
static int LinkedQueue_empty(IQueue* queue);

LinkedQueue* newLinkedQueue(IList* list)
{
    LinkedQueue* linkedQueue = (LinkedQueue*)malloc(sizeof(LinkedQueue));

    if (linkedQueue == NULL) {
        return NULL;
    }

    linkedQueue->list = list;

    linkedQueue->iqueue.add = LinkedQueue_add;
    linkedQueue->iqueue.remove = LinkedQueue_remove;
    linkedQueue->iqueue.empty = LinkedQueue_empty;

    return linkedQueue;
}

LinkedQueue* newDefLinkedQueue()
{
    LinkedList* linkedList = newLinkedList();

    if (linkedList == NULL) {
        return NULL;
    }

    return newLinkedQueue(&linkedList->ilist);
}

void deleteLinkedQueue(LinkedQueue* queue)
{
    free(queue);
}

void deleteDefLinkedQueue(LinkedQueue* queue)
{
    LinkedList* linkedList = container_of(queue->list, LinkedList, ilist);
    deleteLinkedList(linkedList);
    deleteLinkedQueue(queue);
}

void LinkedQueue_add(IQueue* queue, int elem)
{
    LinkedQueue* linkedQueue = container_of(queue, LinkedQueue, iqueue);
    linkedQueue->list->push(linkedQueue->list, elem);
}

int LinkedQueue_remove(IQueue* queue)
{
    LinkedQueue* linkedQueue = container_of(queue, LinkedQueue, iqueue);
    return linkedQueue->list->pop(linkedQueue->list);
}

int LinkedQueue_empty(IQueue* queue)
{
    LinkedQueue* linkedQueue = container_of(queue, LinkedQueue, iqueue);
    return linkedQueue->list->empty(linkedQueue->list);
}