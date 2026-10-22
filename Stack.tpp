#include "Stack.hpp"
#include <stdexcept>
#include <iostream>

template<typename T>
Stack<T>::Stack()
{
    capacity = 50;
    stack_list = new T[capacity];
}

template<typename T>
Stack<T>::Stack(int capacity)
{
    this->capacity = capacity;
    stack_list = new T[capacity];
}

template<typename T>
Stack<T>::~Stack()
{
    delete stack_list;
}

template<typename T>
void Stack<T>::push(T item)
{
    if(!(size == capacity)) // if Stack can't fit this additional item, resize before adding
    {
        resize();
    }
    
    stack_list[++size] = item;
}

template<typename T>
T Stack<T>::pop()
{
    if(size == 0) // if there are no elements to pop
    {
        throw std::runtime_error("No elements in stack to pop.");
    }
    
    return stack_list[--size];
}

template<typename T>
T Stack<T>::top() const
{
    if(size != 0)
    {
        return stack_list[size];
    }
    throw std::runtime_error("No elements in stack; cannot return top.");
}

template<typename T>
void Stack<T>::print() const
{
    std::cout << "Bottom to top: [";
    for(int i = 1; i < size; ++i)
    {
        std::cout << stack_list[i] << ", ";
    }
    std::cout << stack_list[size];
    std::cout << "]\n";
}

template<typename T>
void Stack<T>::resize()
{
    int old_cap = capacity;
    capacity *= 2;
    T* new_stack_list = new T[capacity]; // allocate new stack list
    for(int i = 0; i < old_cap; ++i)
    {
        new_stack_list[i] = stack_list[i]; // copy elements of old list into new list
    }
    delete stack_list;
    stack_list = new_stack_list;
}