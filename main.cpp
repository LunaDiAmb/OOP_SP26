#include <iostream>
#include "Queue.hpp"

int main()
{
    Queue<int> q(5);
    q.enqueue(1);
    q.print();

    return 0;
}