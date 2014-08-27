#include <iostream>
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

void listPermutations(string s) {
    permute("", s);
}

string getLine(string prompt) {
    string line;
    cout << prompt;
    getline(cin, line);
    return line;
}

int main() {
    while (true) {
        string s = getLine(">");
        listPermutations(s);
    }
    return 0;
}
