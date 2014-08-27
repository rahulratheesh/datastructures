#include <iostream>
using namespace std;

void moveSingleDisk(char src, char dst) {
    cout << "Moving " << src << " to " << dst << endl;
}

void moveTower(int n,  char src, char dst, char tmp) {
    if (n > 0) {
        moveTower(n-1, src, tmp, dst);
        moveSingleDisk(src, dst);
        moveTower(n-1, tmp, dst, src);
    }
}

int main() {
    moveTower(3, 'S', 'D', 'T');
}
