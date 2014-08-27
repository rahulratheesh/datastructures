#include "myhashmap.h"
#include <iostream>
using namespace std;

int main() {
    MyHashMap<string> hashmap;
    hashmap.add("C", "Carol");
    hashmap.add("A", "Alice");
    hashmap.add("B", "Bob");
    hashmap.add("C", "Caroline");
    cout << hashmap.getValue("A") << endl;
    cout << hashmap.getValue("B") << endl;
    cout << hashmap.getValue("C") << endl;
    //cout << hashmap.getValue("D") << endl;
    return 0;
}
