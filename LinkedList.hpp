#ifndef SLL_HEADER 
#define SLL_HEADER 

template<typename T>
class LinkedList
{

    public:

        LinkedList();

        void push_front(LinkedListNode* node);
        void push_back(LinkedListNode* node);

        LinkedListNode<T>* pop_front();
        LinkedListNode<T>* pop_back();

        LinkedListNode<T>* element_search(T data) const;

        LinkedListNode<T>* head;

    private:



};

#endif