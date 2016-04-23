#ifndef LIST_H
#define LIST_H

typedef struct _IList IList;
typedef struct _ArrayList ArrayList;
typedef struct _LinkedList LinkedList;
typedef struct _ListNode ListNode;

struct _IList {
    void (*push)(struct _IList* list, int elem);
    int (*pop)(struct _IList* list);
    int (*empty)(struct _IList* list);
};

struct _ArrayList {
    int* _data;
    size_t _capacity;
    size_t _size;
    IList ilist;
};

struct _ListNode {
    int value;
    struct _ListNode* next;
};

struct _LinkedList {
    struct _ListNode* head;
    IList ilist;
};

extern ArrayList* newArrayList(size_t size);
extern void deleteArrayList(ArrayList* arrayList);
extern LinkedList* newLinkedList();
extern void deleteLinkedList(LinkedList* linkedList);

#endif