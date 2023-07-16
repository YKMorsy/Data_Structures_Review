#include "Tree.h"
#include <iostream>
using namespace std;

int main()
{
    Tree test;
    test.insert(10);
    test.insert(5);
    test.insert(20);
    test.insert(3);
    test.insert(9);
    test.insert(15);
    test.insert(25);
    test.insert(1);
    test.insert(4);
    test.insert(13);
    test.insert(30);

    test.insert(17);

    test.inorder_print();

    cout << "\n" << test.contains(15) << "\n";


    return 0;
}