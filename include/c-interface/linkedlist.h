#ifndef LINKEDLIST_WRAPPER_H
#define LINKEDLIST_WRAPPER_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;
typedef struct LinkedList LinkedList;

LinkedList* linkedlist();

void linkedList_append(LinkedList* l, int data);
void linkedList_push(LinkedList* l, int data);
void linkedList_insert_at(LinkedList* l, int pos, int data);
void linkedList_remove(LinkedList* l, int pos);
Node* linkedList_search(LinkedList* l, int pos);
void linkedList_update(LinkedList* l, int pos, int data);
void linkedList_print(LinkedList* l);

#ifdef __cplusplus
}
#endif
#endif
