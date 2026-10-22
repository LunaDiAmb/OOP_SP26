#include "Queue.hpp"
#include <stdexcept>
#include <iostream>

template<typename T>
Queue<T>::Queue()
{
    capacity = 50;
    queue_list = new T[capacity];
}

template<typename T>
Queue<T>::Queue(int capacity)
{
    this->capacity = capacity;
    queue_list = new T[capacity];
}

template<typename T>
Queue<T>::~Queue()
{
    delete queue_list;
}

template<typename T>
void Queue<T>::enqueue(T item)
{
    if(!(size < capacity)) // if queue can't fit more, resize before adding
    {
        resize();
    }
    
    queue_list[++size] = item;
}

template<typename T>
T Queue<T>::dequeue()
{
    if(size == 0) // if there are no elements to dequeue
    {
        throw std::runtime_error("No elements in queue to dequeue");
    }
    
    return queue_list[--size];
}

template<typename T>
T Queue<T>::front() const
{
    return queue_list[size];
}

template<typename T>
void Queue<T>::print() const
{
    std::cout << "Front to back: [";
    for(int i = 0; i < size; ++i)
    {
        std::cout << queue_list[i] << ", ";
    }
    std::cout << "]\n";
}

template<typename T>
void Queue<T>::resize()
{
    int old_cap = capacity;
    capacity *= 2;
    T* new_queue_list = new T[capacity]; // allocate new queue list
    for(int i = 0; i < old_cap; ++i)
    {
        new_queue_list[i] = queue_list[i]; // copy elements of old list into new list
    }
    delete queue_list;
    queue_list = new_queue_list;
}