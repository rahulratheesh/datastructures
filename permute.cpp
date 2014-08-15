#include <iostream>
#include "simpio.h"
using namespace std;

// n recursive calls
void permute(string soFar, string rest) {
    if (rest == "")
        cout << soFar << endl;
    else
        for (unsigned int i = 0; i < rest.length(); i++) {
            string next = soFar + rest[i];
            string remaining = rest.substr(0, i) + rest.substr(i+1);
            permute(next, remaining);
        }
}

void subsets(string soFar, string rest) {
    if (rest == "")
        cout << soFar << endl;
    else {
        subsets( soFar + rest[0], rest.substr(1) );
        subsets( soFar, rest.substr(1));
    }
}

void listPermutations(string s) {
    permute("", s);
}

void listSubsets(string s) {
    subsets("", s);
}

int main() {
    while (true) {
        cout << ">";
        string s = getLine();
        //listPermutations(s);
        listSubsets(s);
    }

    return 0;
}
