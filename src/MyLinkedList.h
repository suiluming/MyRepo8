#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H

#include "Node.h"
#include <string>

template<typename E>
class MyLinkedList {
private:
    Node<E>* first;
public:
    MyLinkedList() : first(nullptr) {}
    void add(E item);
    bool remove(E o);
    void clear();
};

#endif // MYLINKEDLIST_H