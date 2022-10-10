#include <iostream>
#include "linkedlist.hpp"

int main() {
    LinkedList<int> l;
    l.push(23);
    l.push(14);
    l.append(19);
    l.insert_at(1, 54);

    Node<int>*n = l.search(1);
    std::cout << "Data: " << n->data << std::endl;

    l.print();
    l.remove(0);
    l.print();

    return 0;
}