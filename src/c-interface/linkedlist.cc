#include "linkedlist.hpp"
#include "linkedlist.h"

extern "C" {
    LinkedList* linkedlist() {
        return new LinkedList();
    }

    void linkedList_push(LinkedList* l, int data) {
        return l->push(data);
    }

    void linkedList_append(LinkedList* l, int data) {
        return l->append(data);
    }

    void linkedList_insert_at(LinkedList* l, int pos, int data) {
        return l->insert_at(pos, data);
    }

    void linkedList_remove(LinkedList* l, int pos) {
        return l->remove(pos);
    }

    Node* linkedList_search(LinkedList* l, int pos) {
        return l->search(pos);
    }

    void linkedList_update(LinkedList* l, int pos, int data) {
        return l->update(pos, data);
    }
 
    void linkedList_print(LinkedList* l) {
        return l->print();
    }
}