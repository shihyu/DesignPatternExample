#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "base.h"
#include "list.h"

static void LinkedList_push(IList* list, int elem);
static int LinkedList_pop(IList* list);
static int LinkedList_empty(IList* list);

LinkedList* newLinkedList()
{
    LinkedList* linkedList = (LinkedList*)malloc(sizeof(LinkedList));

    if (linkedList == NULL) {
        return NULL;
    }

    linkedList->head = NULL;

    linkedList->ilist.push = LinkedList_push;
    linkedList->ilist.pop = LinkedList_pop;
    linkedList->ilist.empty = LinkedList_empty;

    return linkedList;
}

void deleteLinkedList(LinkedList* linkedList)
{
    ListNode* tmp = linkedList->head;

    while (linkedList->head != NULL) {
        linkedList->head = tmp->next;
        free(tmp);
    }

    free(linkedList);
}

void LinkedList_push(IList* list, int elem)
{
    LinkedList* linkedList = container_of(list, LinkedList, ilist);

    ListNode** node = &linkedList->head;

    while (*node != NULL) {
        node = &(*node)->next;
    }

    ListNode* tmpNode = (ListNode*)malloc(sizeof(ListNode));
    tmpNode->value = elem;
    tmpNode->next = NULL;

    *node = tmpNode;
}

int LinkedList_pop(IList* list)
{
    LinkedList* linkedList = container_of(list, LinkedList, ilist);
    assert(linkedList->head != NULL);

    ListNode* tmp = linkedList->head;
    linkedList->head = tmp->next;

    int value = tmp->value;
    free(tmp);

    return value;
}

int LinkedList_empty(IList* list)
{
    LinkedList* linkedList = container_of(list, LinkedList, ilist);
    return linkedList->head == NULL;
}