// #include <iostream>
// #include "linkedlist.hpp"

// template <typename T>
// void LinkedList<T>::push(const T& data) {
//     Node<T> *new_node = new Node<T>(data);
//     // check if head exists
//     if (this->head) {
//         // link head to new node
//         new_node->next = this->head;
//         this->head->prev = new_node;
//     }
//     else {
//         // set tail to new_node which will also be the head
//         this->tail = new_node;
//     }
//     // set new_node to head
//     this->head = new_node;
//     size++;
// }
// template <typename T>
// void LinkedList<T>::append(const T& data) {
//     Node<T> *new_node = new Node<T>(data);

//     this->tail->next = new_node;
//     new_node->prev = this->tail;

//     this->tail = new_node;
//     new_node->next = nullptr;
//     size++;
// }
// template <typename T>
// void LinkedList<T>::insert_at(int pos, const T& data) {
//     if (pos > size || pos < 0) {
//         throw std::out_of_range("Position out of current Linked List's range.");
//     }

//     Node<T> *prev_node;
//     switch(pos) {
//         case 0:
//             LinkedList::push(data);
//             return;
//         case 1:
//             prev_node = this->head;
//             break;
//         default:
//             prev_node = LinkedList::search(pos-1);
//             break;
//     }

//     Node<T> *new_node = new Node<T>(data);

//     if (this->tail == prev_node) {
//         prev_node->next = new_node;
//         new_node->prev = prev_node;
//         this->tail = new_node;
//         new_node->next = nullptr;
//     }
//     else {
//         // set new_node's prev & next
//         new_node->next = prev_node->next;
//         new_node->prev = prev_node;

//         // fix surrounding node's pointers
//         new_node->next->prev = new_node;
//         prev_node->next = new_node;
//     }
//     size++;
// }
// template <typename T>
// void LinkedList<T>::remove(int pos) {
//     Node<T> *node = LinkedList::search(pos);
//     if (this->head == node) {
//         this->head = this->head->next;

//     }
//     else if (this->tail == node) {
//         node->prev->next = nullptr;
//         this->tail = node->prev;
//     }

//     else {
//         node->prev->next = node->next;
//         node->next->prev = node->prev;
//     }
//     delete node;
//     size--;
// }

// template <typename T>
// Node<T>* LinkedList<T>::search(int pos) {
//     if (pos >= size || pos < 0) {
//         throw std::out_of_range("Position out of current Linked List's range.");
//     }

//     Node<T> *current = this->head;
//     int i = 0;
//     // get each node's next node until we reach the desired position or tail.
//     while (current != nullptr && i != pos) {
//         current = current->next;
//         i++;
//     }

//     return current;
// }

// template <typename T>
// void LinkedList<T>::update(int pos, const T& data) { 
//     Node<T> *node = LinkedList::search(pos);
//     node->data = data;
// }
// template <typename T>
// void LinkedList<T>::print() {
//     Node<T> *node = this->head;
//     while (node != nullptr) {
//         std::cout << node->data << "-->";
//         node = node->next;
//     }
//     std::cout << "NULL" << std::endl;
// }
