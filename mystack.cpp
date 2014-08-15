#include "mystack.h"
#include <iostream>

using namespace std;

template <typename ElemType>
MyStack<ElemType>::MyStack() {
    head = NULL;
}

template <typename ElemType>
MyStack<ElemType>::~MyStack() {
    while(head) {
        Node* oldNode = head;
        head = head->next;
        delete oldNode;
    }
}

template <typename ElemType>
bool MyStack<ElemType>::isEmpty() {
    return (head == NULL);
}

template <typename ElemType>
void MyStack<ElemType>::push(ElemType s) {
    Node* newNode = new Node;
    newNode->val = s;
    newNode->next = head;
    head = newNode;
}

template <typename ElemType>
ElemType MyStack<ElemType>::pop() {
    if ( isEmpty() ) error("Empty Stack");
    ElemType top = head->val;
    Node* oldNode = head;
    head = head->next;
    delete oldNode;
    return top;
}



