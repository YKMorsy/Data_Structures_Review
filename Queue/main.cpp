#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
    Queue test;

    test.push(1);
    test.push(2);
    test.push(3);
    test.push(4);
    test.push(5);

    // H->1->2->3->4->5<-T

    cout << test.pop() << "\n";
    cout << test.pop() << "\n";
    cout << test.pop() << "\n";
    cout << test.pop() << "\n";
    cout << test.pop() << "\n";

    return 0;
}