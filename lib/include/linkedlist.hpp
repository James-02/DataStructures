#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node {
    int data;
    Node* next;
};

class LinkedList {

    public:
        Node* head;
        Node* tail;
        
        LinkedList() {
            head = nullptr;
            tail = nullptr;
        }

        void append(Node n);
        void push(Node n);
        void insert(Node n, int pos);
        void remove(Node n, int pos);
        Node search(Node n);
        void update(Node n);
        void traverse();

};

#endif