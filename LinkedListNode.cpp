#include "LinkedListNode.hpp"

template<typename T>
LinkedListNode<T>::LinkedListNode()
{
    this->next = nullptr;
}

template<typename T>
LinkedListNode<T>::LinkedListNode(T data, LinkedListNode<T>* next)
{
    this->data = data;
    this->next = next;
}