#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

void printVector(vector<int> v) {

    vector<int>::iterator itr1 = v.begin();
    vector<int>::iterator itr2 = v.end();

    for (vector<int>::iterator itr = itr1; itr != itr2; itr++) {
        cout << *itr << endl;
    }

}

void removeDuplicates(vector<int> &v) {
    vector<int>::iterator start = v.begin();
    vector<int>::iterator end = v.end();

    vector<int>::iterator current = start;

    set<int> mySet;

    for(current = start; current != end; current++) {
        int val = *current;

        if ( mySet.end() == mySet.find(val) ) {
            mySet.insert(val);
        }
        else {
            v.erase(current);
            current--;
            end = v.end();
        }
    }
}

int main() {
    int a[7] = {2, 4, 4, 2, 0, 2, 7};
    vector<int> v(&a[0], &a[0]+7) ;
    //printVector(v);
    removeDuplicates(v);
    printVector(v);

    return 0;
}
