#ifndef STACK_H
#define STACK_H

class Node
{
public:
    int value;
    Node *next;
    Node(){value = 0; next = nullptr;}
    Node(int value){this->value = value; next = nullptr;}
};

class Stack
{
private:
    Node *head;

public:
    Stack(){head = nullptr;}
    void push(int);
    int pop();
    int peek();
};

#endif