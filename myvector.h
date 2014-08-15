#ifndef _vector_h
#define _vector_h

#include <iostream>
#include <cstring>

using namespace std;

template <typename ElemType>
class MyVector {

    public:

        MyVector();
        ~MyVector();

        int size();

        void add(ElemType s);
        ElemType getAt(int index);
        void insertAt(int index, ElemType s);
        void removeAt(int index);

    private:

        ElemType *arr;
        int numUsed, numAllocated;
        void doubleCapacity();

};

#include "myvector.cpp"

#endif
