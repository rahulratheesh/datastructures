#include "myqueue.h"
#include <iostream>

using namespace std;

int main() {

    MyQueue<string> queue;
    queue.enqueue("Rahul");
    queue.enqueue("Rakesh");
    queue.enqueue("Ramkesh");
    cout << queue.isEmpty() << endl;
    cout << queue.dequeue() << endl;
    cout << queue.dequeue() << endl;
    cout << queue.dequeue() << endl;
    cout << queue.isEmpty() << endl;
    return 0;

}
