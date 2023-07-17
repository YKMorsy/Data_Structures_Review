#include <iostream>
#include "Queue.h"
using namespace std;

void Queue::push(int value)
{
    Node *newNode = new Node(value);

    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }

}

int Queue::pop()
{
    if (head != nullptr)
    {
        int value = head->value;
        head = head->next;
        return value;
    }
    return false;
}

int Queue::peek()
{
    if (head != nullptr)
    {
        return head->value;
    }
    return false;
}