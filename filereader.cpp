#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <map>
using namespace std;

string getLine(string prompt) {
    string line;
    cout << prompt;
    getline(cin, line);
    return line;
}


int countLines(ifstream &in) {
    int count = 0;
    while(true) {
        string line;
        getline(in, line);
        if ( in.fail() ) break;
        count++;
    }
    return count;
}

int countWordsInFile(ifstream &in) {
    int count = 0;
    string line;
    string word;
    while(true) {
        getline(in, line);
        if ( in.fail() ) break;
        size_t begin = 0;
        size_t end;
        do {
            end = line.find(" ", begin);
            word = line.substr(begin, end == string::npos ? line.size() : end - begin );
            cout << word << endl;
            begin = end + 1;
            count++;
        } while (end != string::npos);
    }
    return count;
}

int uniqueWordsInFile(ifstream &in, map<string, int> &myMap) {
    string word;
    int count = 0;
    while (true) {
        in >> word;
        if ( in.fail() ) break;
        map<string, int>::iterator itr = myMap.find(word);
        if ( itr != myMap.end() ) {
            itr->second = itr->second + 1;
        }
        else {
            myMap.insert( pair<string, int>(word, 1) );
            count++;
        }
    }
    return count;
}

int main() {
    ifstream in;
    string myfile = getLine("Enter Filename: ");
    in.open(myfile.c_str());
    if ( in.fail() ) {
        cerr << "Failed to open file" << endl;
        exit(1);
    }
    //cout << "Number of words = " << countWordsInFile(in) << endl;
    map<string, int> myMap;
    cout << "Number of unique words = " << uniqueWordsInFile(in, myMap) << endl;
    cout << myMap.find("for")->second << endl;
    return 0;
}
