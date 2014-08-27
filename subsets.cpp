#include <iostream>
#include "simpio.h"

using namespace std;


void subsets(string soFar, string rest) {
    if (rest == "")
        cout << soFar << endl;
    else {
        subsets( soFar + rest[0], rest.substr(1) );
        subsets( soFar, rest.substr(1));
    }
}

void listSubsets(string s) {
    subsets("", s);
}

int main() {
    while (true) {
        cout << ">";
        string s = getLine();
        listSubsets(s);
    }

    return 0;
}

