#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template<class T>
struct Node {
    T data;
    Node* next;
    Node* prev;
    Node(T data) : data(data) {}
};

template <typename T>
class LinkedList {
    private: 
        int size;
        Node<T>* head;
        Node<T>* tail;

    public:
        LinkedList() {
            size = 0;
            head = nullptr;
            tail = nullptr;
        }

        /**
         * @brief Pushes a node to the start of the Linked List, this node becomes the head.
         * @param data data to initialise the node with.
         * 
         */
        void push(const T& data) {
            Node<T> *new_node = new Node<T>(data);
            // check if head exists
            if (head) {
                // link head to new node
                new_node->next = head;
                head->prev = new_node;
            }
            else {
                // set tail to new_node which will also be the head
                tail = new_node;
            }
            // set new_node to head
            head = new_node;
            size++;
        }

        /**
         * @brief Append a node onto the end of the Linked List, this node becomes the tail.
         * @param data data to initialise node with
         * 
         */
        void append(const T& data) {
            Node<T> *new_node = new Node<T>(data);

            tail->next = new_node;
            new_node->prev = tail;

            tail = new_node;
            new_node->next = nullptr;
            size++;
        }

        /**
         * @brief Inserts a node at the position given.
         * @param pos position to insert node at.
         * @param data data to initialise node with.
         * @throws std::out_of_bounds()
         * 
         */
        void insert_at(int pos, const T& data) {
            if (pos > size || pos < 0) {
                throw std::out_of_range("Position out of current Linked List's range.");
            }

            Node<T> *prev_node;
            switch(pos) {
                case 0:
                    LinkedList::push(data);
                    return;
                case 1:
                    prev_node = head;
                    break;
                default:
                    prev_node = LinkedList::search(pos-1);
                    break;
            }

            Node<T> *new_node = new Node<T>(data);

            if (tail == prev_node) {
                prev_node->next = new_node;
                new_node->prev = prev_node;
                tail = new_node;
                new_node->next = nullptr;
            }
            else {
                // set new_node's prev & next
                new_node->next = prev_node->next;
                new_node->prev = prev_node;

                // fix surrounding node's pointers
                new_node->next->prev = new_node;
                prev_node->next = new_node;
            }
            size++;
        }

        /**
         * @brief Removes the node at the position given.
         * @param pos position to remove Node from.
         * 
         */
        void remove(int pos) {
            Node<T> *node = LinkedList::search(pos);
            if (head == node) {
                head = head->next;

            }
            else if (tail == node) {
                node->prev->next = nullptr;
                tail = node->prev;
            }

            else {
                node->prev->next = node->next;
                node->next->prev = node->prev;
            }
            delete node;
            size--;
        }

        /**
         * @brief Returns the node at the given position.
         * @param pos position to search for a node.
         * @return Pointer to the node at that position.
         * @throws std::out_of_bounds()
         * 
         */
        Node<T>* search(int pos) {
            if (pos >= size || pos < 0) {
                throw std::out_of_range("Position out of current Linked List's range.");
            }

            Node<T> *current = head;
            int i = 0;
            // get each node's next node until we reach the desired position or tail.
            while (current != nullptr && i != pos) {
                current = current->next;
                i++;
            }

            return current;
        }

        /**
         * @brief Updates the data of the Node at the given position using the data parameter.
         * @param pos position to update node at.
         * @param data data to update node to hold.
         * 
         */
        void update(int pos, const T& data) {
            Node<T> *node = LinkedList::search(pos);
            node->data = data;
        }

        /**
         * @brief Prints each element of the Linked List with a pointer to the next element.
         * 
         * 
         */      
        void print() {
            Node<T> *node = head;
            while (node != nullptr) {
                std::cout << node->data << "-->";
                node = node->next;
            }
            std::cout << "NULL" << std::endl;
        }
};

#endif