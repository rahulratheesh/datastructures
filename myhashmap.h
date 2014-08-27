#ifndef _myhashmap_h
#define _myhashmap_h

#include <iostream>
#include <cstring>

using namespace std;

template <typename ValType>
class MyHashMap {

public:
    MyHashMap();
    ~MyHashMap();

    void add(string key, ValType value);
    ValType getValue(string key);

private:

    static const int numBuckets = 99;

    struct cell {
        string key;
        ValType value;
        cell* next;
    };
    cell* buckets[numBuckets];

    int hash(string key, int numBuckets);
    cell* findCell(string key, cell* list);
};

#include "myhashmap.cpp"

#endif // _myhashmap_h
