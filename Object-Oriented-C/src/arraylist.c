#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "base.h"
#include "list.h"

static void ArrayList_push(IList* list, int elem);
static int ArrayList_pop(IList* list);
static int ArrayList_empty(IList* list);
static void ArrayList_resize(ArrayList* arrayList, size_t size);

ArrayList* newArrayList(size_t size)
{
    if (size <= 0) {
        size = 1;
    }

    ArrayList* arrayList = (ArrayList*)malloc(sizeof(ArrayList));

    if (arrayList == NULL) {
        return NULL;
    }

    arrayList->_capacity = 0;
    arrayList->_size = size;

    arrayList->_data = (int*)malloc(sizeof(int) * size);

    arrayList->ilist.push = ArrayList_push;
    arrayList->ilist.pop = ArrayList_pop;
    arrayList->ilist.empty = ArrayList_empty;

    return arrayList;
}

void deleteArrayList(ArrayList* arrayList)
{
    free(arrayList->_data);
    free(arrayList);
}

void ArrayList_push(IList* list, int elem)
{
    ArrayList* arrayList = container_of(list, ArrayList, ilist);

    if (arrayList->_capacity == arrayList->_size) {
        ArrayList_resize(arrayList, arrayList->_size << 1);
    }

    arrayList->_data[arrayList->_capacity++] = elem;
}

int ArrayList_pop(IList* list)
{
    ArrayList* arrayList = container_of(list, ArrayList, ilist);
    return arrayList->_data[--arrayList->_capacity];
}

int ArrayList_empty(IList* list)
{
    ArrayList* arrayList = container_of(list, ArrayList, ilist);
    return arrayList->_capacity == 0;
}

void ArrayList_resize(ArrayList* arrayList, size_t size)
{
    if (size <= arrayList->_size) {
        return;
    }

    int* data = (int*)malloc(sizeof(int) * size);

    memcpy(data, arrayList->_data, arrayList->_size * sizeof(int));
    free(arrayList->_data);

    arrayList->_data = data;
    arrayList->_size = size;
}