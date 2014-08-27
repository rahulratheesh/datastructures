#include "mymap.h"
#include <cstring>
#include <iostream>

using namespace std;

template <typename ValType>
MyMap<ValType>::MyMap() {
    root = NULL;
}

template <typename ValType>
MyMap<ValType>::~MyMap() {
    treeDelete(root);
}

template <typename ValType>
void MyMap<ValType>::add(string key, ValType value) {
    treeEnter(root, key, value);
}

template <typename ValType>
ValType MyMap<ValType>::getValue(string key) {
    node *found = treeSearch(root, key);
    if (found == NULL) {
        throw ErrorException("Invalid Key");
    }
    return found->value;
}

template <typename ValType>
typename MyMap<ValType>::node* MyMap<ValType>::treeSearch(node *t, string key) {
    if (t == NULL) {
        return NULL;
    }
    if (key == t->key) {
        return t;
    }
    else if (key < t->key)
        return treeSearch(t->left, key);
    else
        return treeSearch(t->right, key);
}

template <typename ValType>
void MyMap<ValType>::treeEnter(node* &t, string key, ValType value) {
    if (t == NULL) {
        t = new node;
        t->key = key;
        t->value = value;
        t->left = t->right = NULL;
    }
    else if (key == t->key) {
        t->value = value;
    }
    else if (key < t->key) {
        treeEnter(t->left, key, value);
    }
    else {
        treeEnter(t->right, key, value);
    }
}

// in order
template <typename ValType>
void MyMap<ValType>::treePrint(node* t){
    if (t != NULL) {
        treePrint(t->left);
        cout << t-> key << endl;
        treePrint(t->right);
    }

}

// post order
template <typename ValType>
void MyMap<ValType>::treeDelete(node* t){
    if (t != NULL) {
        treeDelete(t->left);
        treeDelete(t->right);
        delete t;
    }
}

