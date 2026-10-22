#include "LinkedList.hpp"

template<typename T>
LinkedList<T>::LinkedList()
{
    head->next = nullptr;
}

void LinkedList<T>::push_front(LinkedListNode<T>* node)
{
    // Idea: the new node should be the new head of the linked list, and the old head needs to be pushed in front of it
    LinkedListNode<T>* old_head = head;

    // structure: head, head->next, head->next->next...
    // want: node, head, head->next, head->next->next...

    node->next->next = head->next;
    node->next = head;
    head = node;
}

void LinkedList<T>::push_back(LinkedListNode<T>* node)
{
    // Idea: use a dummy search node to find the position in memory where we can insert a value, then put the node 
    LinkedListNode<T>* dummy_search_node = head;

    while(dummy_search_node->next)
    {
        dummy_search_node = dummy_search_node->next;
    }

    dummy_search_node->next = node;
}

LinkedListNode<T>* LinkedList<T>::pop_front()
{
    // Idea: unlink the head, forgetting the node, and head->next becomes new head
    LinkedListNode<T>* old_head = head;

    
}

LinkedListNode<T>* LinkedList<T>::pop_back()
{

}

LinkedListNode<T>* LinkedList<T>::element_search(T data) const
{

}