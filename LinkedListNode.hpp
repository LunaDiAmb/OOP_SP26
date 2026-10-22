#ifndef SLL_NODE_HEADER 
#define SLL_NODE_HEADER

template<typename T>
class LinkedListNode
{
    
    public:

        LinkedListNode();
        LinkedListNode(T data, LinkedListNode<T>* next);

        LinkedListNode<T>* next;
        T data;

};

#endif