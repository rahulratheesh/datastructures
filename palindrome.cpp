#include <iostream>
#include <cstring>
#include "simpio.h"
using namespace std;

bool isPalindrome(string s) {
    if (s.length() <= 1) return true;
    return ( s[0] == s[s.length()-1] && isPalindrome(s.substr(1, s.length() - 2)) );
}


int main() {

    string s = getLine();
    cout << "palindrome =  " << isPalindrome(s) << endl;


    return 0;
}

