#include "myvector.h"
#include "error.h"

template <typename ElemType>
MyVector<ElemType>::MyVector() {
    arr = new ElemType[2];
    numUsed = 0;
    numAllocated = 2;

}

template <typename ElemType>
MyVector<ElemType>::~MyVector() {
    delete[] arr;
}

template <typename ElemType>
void MyVector<ElemType>::doubleCapacity() {
    ElemType* bigger = new ElemType[numAllocated*2];
    for (int i = 0; i < size(); i++)
        bigger[i] = arr[i];
    delete[] arr;
    arr = bigger;
    numAllocated *= 2;
}

template <typename ElemType>
int MyVector<ElemType>::size() {
    return numUsed;
}

template <typename ElemType>
void MyVector<ElemType>::add(ElemType s) {
    if (numUsed == numAllocated)
        doubleCapacity();
    arr[numUsed++] = s;
}

template <typename ElemType>
ElemType MyVector<ElemType>::getAt(int index) {
    if ( index < 0 || index >= size() ) {
        error("Out of bounds");
    }
    return arr[index];
}

template <typename ElemType>
void MyVector<ElemType>::insertAt(int index, ElemType s) {
    if ( index < 0 || index >= size() ) {
        error("Out of bounds");
    }
    if (numUsed == numAllocated)
        doubleCapacity();
    for (int i = size(); i >= index; i--) {
        arr[i+1] = arr[i];
    }
    arr[index] = s;
    numUsed++;
}

template <typename ElemType>
void MyVector<ElemType>::removeAt(int index) {
    if ( index < 0 || index >= size() ) {
        error("Out of bounds");
    }
    for (int i = index; i < numUsed; i++) {
        arr[i] = arr[i+1];
    }
    numUsed--;
}
