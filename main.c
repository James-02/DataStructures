#include <stdio.h>
#include "linkedlist.h"

int main() {
    struct LinkedList* l = linkedlist();
    linkedList_push(l, 23);
    linkedList_push(l, 14);
    linkedList_append(l, 19);
    linkedList_insert_at(l, 3, 54);

    struct Node *n = linkedList_search(l, 2);

    linkedList_print(l);
    linkedList_remove(l, 0);
    linkedList_print(l);

    return 0;
}