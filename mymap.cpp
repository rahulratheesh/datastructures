#include "mymap.h"
#include "error.h"
#include <iostream>

using namespace std;

template <typename ValType>
MyMap<ValType>::MyMap() {
}

template <typename ValType>
MyMap<ValType>::~MyMap() {
}

template <typename ValType>
void MyMap<ValType>::add(string key, ValType value) {
    pair newPair;
    newPair.key = key;
    newPair.value = value;
    entries.add(pair);
}

template <typename ValType>
ValType MyMap<ValType>::getValue(string key) {
}

template <typename ValType>
int ValType MyMap<ValType>::findIndexOfKey(string key) {
    for (int i = 0; i < entries.size(); i++) {
        if (entries.getAt(i).key == key)
            return i;
    }
    return -1;
}
