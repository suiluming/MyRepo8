#include "MyLinkedList.h"

template<typename E>
void MyLinkedList<E>::add(E item) {
    if (first == nullptr) {
        first = new Node<E>(item);
        return;
    }
    Node<E>* p = first;
    while (p->next != nullptr) {
        p = p->next;
    }
    p->next = new Node<E>(item);
}

template<typename E>
bool MyLinkedList<E>::remove(E o) {
    // 01 if (o == null)
    if (o == nullptr) {
        // 02 for
        for (Node<E>* x = first; x != nullptr; x = x->next) {
            // 03 if (x.item == null)
            if (x->item == nullptr) {
                // 04 unlink
                delete x;
                // 05 return true
                return true;
            }
        }
    }
    // 06 else
    else {
        // 07 for
        for (Node<E>* x = first; x != nullptr; x = x->next) {
            // 08 if (o.equals)
            if (o == x->item) {
                // 09 unlink
                delete x;
                // 10 return true
                return true;
            }
        }
    }
    // 11 return false
    return false;
}

template<typename E>
void MyLinkedList<E>::clear() {
    Node<E>* p = first;
    while (p != nullptr) {
        Node<E>* q = p->next;
        delete p;
        p = q;
    }
    first = nullptr;
}

// 显式实例化
template class MyLinkedList<int*>;