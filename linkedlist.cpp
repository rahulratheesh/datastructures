#include <iostream>
#include "simpio.h"
using namespace std;

struct Entry {
    string name, phone;
    Entry* next;
};

void printEntry(Entry* entry) {
    cout << entry->name << " " << entry->phone << endl;
}

void printList(Entry *list) {
    if (list != NULL) {
        printList(list->next);
        printEntry(list);
    }
}

int count(Entry* list) {
    if (list == NULL) return 0;
    return 1 + count(list->next);
}

void deallocate(Entry* list) {
    if (list != NULL) {
        deallocate(list->next);
        delete list;
    }
}

Entry* getNewEntry() {
        cout << "Enter name (ENTER to quit): ";
        string name = getLine();
        if (name == "") return NULL;

        Entry* newOne = new Entry;
        newOne->name = name;

        cout << "Enter phone: ";
        string phone = getLine();
        newOne->phone = phone;

        newOne->next = NULL;

        return newOne;
}

void insertSorted(Entry* &list, Entry *newOne) {
    if (list == NULL || newOne->name < list->name) {
        newOne->next = list;
        list = newOne;
    } else {
        insertSorted(list->next, newOne);
    }
}

Entry* buildList() {
    Entry* list = new Entry;
    while (true) {
        Entry* entry = getNewEntry();
        if (entry == NULL) break;
        entry->next = list;
        list = entry;
    }
    return list;
}

int main() {
    Entry* list = buildList();
    printList(list);
    return 0;
}
