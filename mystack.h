#ifndef _mystack_h
#define _mystack_h

template <typename ElemType>
class MyStack {

    public:

        MyStack();
        ~MyStack();

        bool isEmpty();

        void push(ElemType s);
        ElemType pop();

    private:
        struct Node{
            ElemType val;
            Node* next;
        };

        Node* head;

};

#include "mystack.cpp"

#endif
