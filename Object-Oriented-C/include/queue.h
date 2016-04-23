#ifndef QUEUE_H
#define QUEUE_H

#include <pthread.h>

#include "list.h"

typedef struct _IQueue IQueue;
typedef struct _LinkedQueue LinkedQueue;
typedef struct _BlockingQueue BlockingQueue;

struct _IQueue {
    void (*add)(struct _IQueue* queue, int elem);
    int (*remove)(struct _IQueue* queue);
    int (*empty)(struct _IQueue* queue);
};

struct _LinkedQueue {
    IList* list;
    struct _IQueue iqueue;
};

struct _BlockingQueue {
    pthread_mutex_t mutex;
    pthread_cond_t cond;
    IQueue* queue;
    struct _IQueue iqueue;
};

extern LinkedQueue* newLinkedQueue(IList* list);
extern LinkedQueue* newDefLinkedQueue();
extern void deleteLinkedQueue(LinkedQueue* queue);
extern void deleteDefLinkedQueue(LinkedQueue* queue);

extern BlockingQueue* newBlockingQueue(IQueue* queue);
extern BlockingQueue* newDefBlockingQueue();
extern void deleteBlockingQueue(BlockingQueue* queue);
extern void deleteDefBlockingQueue(BlockingQueue* queue);

#endif