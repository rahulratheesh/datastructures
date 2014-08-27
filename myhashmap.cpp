#include "myhashmap.h"
#include "error.h"

template <typename ValType>
MyHashMap<ValType>::MyHashMap() {
    for (int i = 0; i < numBuckets; i++) {
        buckets[i] = NULL;
    }
}

template <typename ValType>
MyHashMap<ValType>::~MyHashMap() {
    for (int i = 0; i < numBuckets; i++) {
        cell* list = buckets[i];
        while (list) {
            cell* oldCell = list;
            delete oldCell;
            list = list->next;
        }
    }
}

template <typename ValType>
void MyHashMap<ValType>::add(string key, ValType value) {
    int bucketPos = hash(key, numBuckets);
    cell* match = findCell(key, buckets[bucketPos]);
    if (match != NULL) {
        match->value = value;
    }
    else {
        cell* newCell = new cell;
        newCell->key = key;
        newCell->value = value;
        newCell->next = buckets[bucketPos];
        buckets[bucketPos] = newCell;
    }
}

template <typename ValType>
ValType MyHashMap<ValType>::getValue(string key) {
    int bucketPos = hash(key, numBuckets);
    cell* match = findCell(key, buckets[bucketPos]);
    if (match == NULL)
        error("Non-existent key");
    return match->value;
}

const int multiplier = -1664117991L;
template <typename ValType>
int MyHashMap<ValType>::hash(string key, int numBuckets) {
    unsigned long hashCode = 0;
    for (unsigned int i = 0; i < key.length(); i++) {
        hashCode = hashCode * multiplier + key[i];
    }
    return (hashCode % numBuckets);
}

template <typename ValType>
typename MyHashMap<ValType>::cell* MyHashMap<ValType>::findCell(string key, cell* list) {
    for (cell* curr = list; curr != NULL; curr = curr->next)
        if (curr->key == key) return curr;
    return NULL;
}
