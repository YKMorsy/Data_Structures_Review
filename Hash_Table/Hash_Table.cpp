#include <iostream>
#include <stdlib.h> // calloc and free
#include <math.h>
#include "Hash_Table.h"
using namespace std;

int Hash_Table::hashFunction(char const *key)
{
    int sum = 0;
    int p = 31;

    // good hash function
    if (hash_function == true)
    {
        for (int i = 0; key[i] != '\0'; i++)
        {
            sum += key[i] * pow(p,i);
        }

        return (sum % capacity);
    }
    else
    {
        for (int i = 0; key[i] != '\0'; i++)
        {
            sum += key[i];
        }

        return (sum);
    }

}

void Hash_Table::insert(char const *key, int value)
{
    int index = hashFunction(key);
    Node *newNodePtr = new Node(key, value);

    // check what is in the array at index
    if (arr[index] == NULL)
    {
        arr[index] = newNodePtr;
    }
    else
    {
        // iterate through linked list
        Node *curPointer = arr[index];
        Node *prevPointer = curPointer;

        while(curPointer != NULL)
        {
            // if node has the same key, update it
            if (curPointer->key == key)
            {
                curPointer->value = value;
                return;
            }
            prevPointer = curPointer;
            curPointer = curPointer->next;
        }
        

        // otherwise, add to linked list
        prevPointer->next = newNodePtr;
        
    }
}

int Hash_Table::getValue(char const *key)
{
    // get index
    int index = hashFunction(key);

    // find node with key that is the same
    // iterate through linked list
    Node *curPointer = arr[index];
    while(curPointer != NULL)
    {
        // if node has the same key, update it
        if (curPointer->key == key)
        {
            return curPointer->value;
            
        }
        
        curPointer = curPointer->next;
    }

    // if not found, return false
    return false;
}