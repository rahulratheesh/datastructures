#include<iostream>
using namespace std;

int raise(int base, int exp) {
    if (exp == 0)
        return 1;
    else
        return base * raise(base, exp - 1);
}

int main() {
    cout << raise (2, 6) << endl;
    return 0;
}
