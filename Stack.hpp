#ifndef STACK_HEADER
#define STACK_HEADER 

template<typename T>
class Stack 
{
    
    public:
    
        Stack();
        Stack(int capacity);
        ~Stack();
        
        void    push(T item);
        T       pop();
        T       top() const;
        
        void    print() const;
    
    private:
    
        void    resize();
        
        T* stack_list;
        int capacity;
        int size = 0;
    
};

#include "Stack.tpp"

#endif