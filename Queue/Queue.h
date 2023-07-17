#ifndef QUEUE_H
#define QUEUE_H

class Node
{
public:
    int value;
    Node *next;
    Node(){value = 0; next = nullptr;}
    Node(int value){this->value = value; next = nullptr;}
};

class Queue
{
private:
    Node *head;
    Node *tail;
public:
    Queue(){head = nullptr; tail = nullptr;}
    void push(int);
    int pop();
    int peek();
};

#endif