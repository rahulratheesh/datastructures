#include "mystack.h"

int main() {

    MyStack<string> stack;
    stack.push("Rahul");
    stack.push("Rakesh");
    stack.push("Ramkesh");
    cout << stack.isEmpty() << endl;
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    cout << stack.isEmpty() << endl;
    return 0;
}
