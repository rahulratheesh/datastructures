#include "simpio.h"
#include <iostream>

using namespace std;

const int numScores = 4;

double getScoresAndAverage(int numScores);
int countOccurences(char ch, string s);
void removeOccurences(char ch, string &s);

int main() {
    cout << "Number of scores = " << numScores << "." << endl;
    double average = getScoresAndAverage(numScores);
    cout << "Average = " << average << "." << endl;
    string name = "Rahul Ratheesh";
    cout << "Number of occurences = " << countOccurences('h', name) << endl;
    removeOccurences('h', name);
    cout <<  name << endl;
    return 0;
}

double getScoresAndAverage(int numScores) {
    int sum = 0;
    for (int i = 0; i < numScores; i++) {
        cout << "Next Score? ";
        int nextScore = getInteger();
        sum += nextScore;
    }
    return double(sum)/numScores;
}

int countOccurences(char ch, string s) {
    int count = 0;
    for (unsigned int i = 0; i < s.length(); i++) {
        if (ch == s[i]) count++;
    }
    return count;
}

void removeOccurences(char ch, string &s) {
    int pos = 0;
    while ( (pos = s.find(ch, pos)) != string::npos ) {
        s.erase(pos, 1);
    }
}
