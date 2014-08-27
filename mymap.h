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

        struct node {
            string key;
            ValType value;
            node* left;
            node* right;
        };

        node* root;

        node* treeSearch(node* t, string key);
        void treeEnter(node* &t, string key, ValType value);

        void treePrint(node* t);
        void treeDelete(node* t);
};

#include "mymap.cpp"

#endif // _mymap_h
