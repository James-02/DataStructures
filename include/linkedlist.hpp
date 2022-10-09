#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int data) : data(data) {}
};

class LinkedList {
    private: 
        int size;
        Node* head;
        Node* tail;

    public:
        LinkedList() {
            size = 0;
            head = nullptr;
            tail = nullptr;
        }
        /**
         * @brief Append a node onto the end of the Linked List, this node becomes the tail.
         * @param data data to initialise node with
         * 
         */
        void append(int data);

        /**
         * @brief Pushes a node to the start of the Linked List, this node becomes the head.
         * @param data data to initialise the node with.
         * 
         */
        void push(int data);

        /**
         * @brief Inserts a node at the position given.
         * @param pos position to insert node at.
         * @param data data to initialise node with.
         * @throws std::out_of_bounds()
         * 
         */
        void insert_at(int pos, int data);

        /**
         * @brief Removes the node at the position given.
         * @param pos position to remove Node from.
         * 
         */
        void remove(int pos);

        /**
         * @brief Returns the node at the given position.
         * @param pos position to search for a node.
         * @return Pointer to the node at that position.
         * @throws std::out_of_bounds()
         * 
         */
        Node* search(int pos);

        /**
         * @brief Updates the data of the Node at the given position using the data parameter.
         * @param pos position to update node at.
         * @param data data to update node to hold.
         * 
         */
        void update(int pos, int data);

        /**
         * @brief Prints each element of the Linked List with a pointer to the next element.
         * 
         * 
         */      
        void print();

};

#endif