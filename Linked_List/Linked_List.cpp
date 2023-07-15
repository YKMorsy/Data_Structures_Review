#include <iostream>
#include <string>
#include "Linked_List.h"
using namespace std;

void Linked_List::insertNode(int value)
{
    // pointer to new node
    Node *newNodePtr = new Node(value);

    // initialize head to first node if it doesn't point to anything
    if (head == nullptr)
    {
        head = newNodePtr;
    }
    else
    {
        // iterate through ll using pointers to insert NEXT node
        Node *curPointer = head;
        while(curPointer->next != nullptr)
        {
            curPointer = curPointer->next;
        }

        // set last pointer to new node pointer
        curPointer->next = newNodePtr;
    }
}

void Linked_List::printList()
{
    // iterate through ll using pointers if list has something present to print CURRENT node
    if (head != nullptr)
    {
        Node *curPointer = head;
        while(curPointer != nullptr)
        {
            cout << curPointer->value << " ";
            curPointer = curPointer->next;
        }
    }
}

void Linked_List::deleteNode(int position)
{
    if (head != nullptr)
    {
        // delete head pointer's node
        if (position == 0)
        {
            Node *nodeToDelete = head;
            head = nodeToDelete->next;
            delete nodeToDelete;

        }
        else
        {
            // iterate through list keeping track of current and previous pointer
            int pos = 0;
            Node *nextPointer = head;
            Node *curPointer = head;
            while(pos < position && nextPointer->next != nullptr)
            {
                pos++;
                curPointer = nextPointer;
                nextPointer = nextPointer->next;
            }

            if (pos < position)
            {
                cout << "Position Out of Bounds\n";
                return;
            }

            // set previous pointer's next node to current pointer's next node
            curPointer->next = nextPointer->next;
            delete nextPointer;
        }

    }
}

void Linked_List::getValue(int position)
{
    int pos = 0;
    Node *curPointer = head;
    while (pos < position && curPointer->next != nullptr)
    {
        pos++;
        curPointer = curPointer->next;
    }

    if (pos == position)
    {
        cout << curPointer->value << "\n";
    }
    else
    {
        cout << "Position Out of Bounds\n";
    }

    
}