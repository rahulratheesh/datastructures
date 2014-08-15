#ifndef _queue_h
#define _queue_h

template <typename ElemType>
class MyQueue {

    public:

        MyQueue();
        ~MyQueue();

        bool isEmpty();

        void enqueue(ElemType s);
        ElemType dequeue();

    private:
        struct Node{
            ElemType val;
            Node* next;
        };

        Node *head, *tail;

};

#include "myqueue.cpp"


#endif // _queue_h
