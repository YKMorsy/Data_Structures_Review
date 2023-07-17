#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    Stack test;

    test.push(1);
    test.push(2);
    test.push(3);
    test.push(4);

    cout << test.peek() << "\n";
    cout << test.pop() << "\n";
    cout << test.peek() << "\n";
    cout << test.pop() << "\n";
    cout << test.peek() << "\n";
    cout << test.pop() << "\n";
    cout << test.peek() << "\n";

    return 0;
}