#include "myvector.h"

int main() {
    MyVector<string> v;
    v.add("Rahul");
    v.add("Mayur");
    v.add("Charan");
    v.add("Chirag");
    v.insertAt(1, "Ankit");
    v.insertAt(0, "Arjun");
    v.removeAt(4);
    for (int i = 0; i < v.size(); i++)
        cout << v.getAt(i) << endl;


}
