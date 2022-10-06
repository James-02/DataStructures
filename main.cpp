#include <iostream>
#include "linkedlist.hpp"

int main() {
    LinkedList l;
    l.push(23);
    l.push(14);
    l.append(19);
    l.insert_at(3, 54);

    Node *n = l.search(2);

    l.print();
    l.remove(0);
    l.print();

    return 0;
}