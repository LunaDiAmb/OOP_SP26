#ifndef Q_HEADER
#define Q_HEADER 

template<typename T>
class Queue 
{
    
    public:
    
        Queue();
        Queue(int capacity);
        ~Queue();
        
        void    enqueue(T item);
        T       dequeue();
        T       front() const;
        
        void    print() const;
    
    private:
    
        void    resize();
        
        T* queue_list;
        int capacity;
        int size = 0;
    
};

#endif