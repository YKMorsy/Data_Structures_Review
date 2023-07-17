#include <iostream>
#include "Stack.h"
using namespace std;

void Stack::push(int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

int Stack::peek()
{
    if (head != nullptr)
    {
        return head->value;
    }
    return false;
}

int Stack::pop()
{
    if (head != nullptr)
    {
        int value = head->value;
        head = head->next;
        return value;
    }
    return false;
}