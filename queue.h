#ifndef _queue_h
#define _queue_h

template <typename ElemType>
class Queue {

    public:

        Queue();
        ~Queue();

        int size();
        bool isEmpty();

        void enqueue(ElemType elem);
        ElemType dequeue();
        ElemType peek();

};

#endif
