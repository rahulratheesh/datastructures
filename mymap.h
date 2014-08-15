#ifndef _mymap_h
#define _mymap_h

#include <cstring>
#include "myvector.h"

template <typename ValType>
class MyMap {

    public:

        MyMap();
        ~MyMap();

        void add(string key, ValType value);
        ValType getValue(string key);

    private:

        struct pair {
            string key;
            ValType value;
        };

        MyVector<pair> entries;
        int findIndexOfKey(string key);
};

#include "mymap.cpp"

#endif // _mymap_h
