#include "mymap.h"
#include <iostream>
using namespace std;

int main() {
    MyMap<string> map;
    map.add("C", "Carol");
    map.add("A", "Alice");
    map.add("B", "Bob");
    map.add("C", "Caroline");
    cout << map.getValue("A") << endl;
    cout << map.getValue("B") << endl;
    cout << map.getValue("C") << endl;
    cout << map.getValue("D") << endl;
    return 0;
}
