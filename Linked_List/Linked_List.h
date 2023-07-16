#ifndef LINKED_LIST_H
#define LINKED_LIST_H

class Node 
{
public:
    // value of node and pointer to next node
    int value;
    Node *next;

    Node()
    {
        value = 0;
        next = nullptr;
    }
    
    Node(int value)
    {
        this->value = value;
        next = nullptr;
    }
};

class Linked_List
{
private:
    // head pointer of list
    Node *head;
public:
    Linked_List()
    {
        head = nullptr;
    }
    // insert node into list given value o(n)
    void insertNode(int);
    // print out list o(n)
    void printList();
    // delete node given position o(n)
    void deleteNode(int);
    // print value of given position o(n)
    void getValue(int);
};


#endif