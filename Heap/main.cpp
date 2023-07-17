#include <iostream>
#include "Heap.h"
using namespace std;

int main()
{
    Heap test(20);
    test.insert(2);
    test.insert(4);
    test.insert(8);
    test.insert(9);
    test.insert(7);
    test.insert(10);
    test.insert(9);
    test.insert(15);
    test.insert(20);

    test.printArr();

    cout << "\n";

    test.insert(3);

    test.printArr();

    cout << "\n" << test.peek() << "\n";

    test.poll();

    test.printArr();
    
    return 0;
}