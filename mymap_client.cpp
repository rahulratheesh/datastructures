#include "mymap.h"
#include "iostream>
using namespace std;

int main() {
    MyMap<string> map;
    map.add("snow", "white");
    map.add("rose", "red");
    map.add("blue", "moon");
    cout << map.getValue("snow") << endl;
    return 0;
}
