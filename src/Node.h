#ifndef NODE_H
#define NODE_H

template<typename E>
struct Node {
    E item;
    Node<E>* next;
    Node(E val) : item(val), next(nullptr) {}
};

#endif // NODE_H