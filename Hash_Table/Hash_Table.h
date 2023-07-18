#ifndef HASH_TABLE_H
#define HASH_TABLE_H

class Node
{
public:
    char const *key;
    int value;
    Node *next;

    Node(char const *key, int value)
    {
        this->key = key;
        this->value = value;
        next = NULL;
    }
};

class Hash_Table
{
private:

    Node **arr; // each element in array is a pointer to the head node pointer
    int capacity;

    // vars for hash function
    bool hash_function;

    int hashFunction(char const *);

public:

    // constructor that uses good hash function
    Hash_Table(int capacity, bool hash_function)
    {
        this->capacity = capacity;
        arr = (Node **) calloc(capacity, sizeof(Node *));

        this->hash_function = hash_function;
    }

    void insert(char const *,int);
    int getValue(char const *);
};

#endif