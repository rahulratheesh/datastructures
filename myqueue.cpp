#include "myqueue.h"
#include "error.h"
#include <iostream>

template <typename ElemType>
MyQueue<ElemType>::MyQueue() {
    head = tail = NULL;
}

template <typename ElemType>
MyQueue<ElemType>::~MyQueue() {
    while (head) {
        Node* oldCell = head;
        head = head->next;
        delete oldCell;
    }
}

template <typename ElemType>
bool MyQueue<ElemType>::isEmpty() {
    return (head == NULL);

}

template <typename ElemType>
void MyQueue<ElemType>::enqueue(ElemType s) {
    Node* newNode = new Node;
    newNode->val = s;
    newNode->next = NULL;
    if ( isEmpty() ) {
        head = tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}


template <typename ElemType>
ElemType MyQueue<ElemType>::dequeue() {
    if ( isEmpty() ) error("Queue is empty");
    ElemType front = head->val;
    Node *oldNode = head;
    head = head->next;
    delete oldNode;
    return front;
}

