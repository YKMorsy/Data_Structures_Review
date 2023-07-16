#ifndef TREE_H
#define TREE_H

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node()
    {
        value = 0;
        left = nullptr;
        right = nullptr;
    }

    Node(int value)
    {
        this->value = value;
        left = nullptr;
        right = nullptr;
    }
};

class Tree
{
private:
    Node *rootPointer;
    void inorder_print(Node *nodePointer);
    bool contains(Node *nodePointer, int);
public:
    Tree()
    {
        rootPointer = nullptr;
    }
    // Nonrecursive method of insertion
    void insert(int);
    bool contains(int);
    void inorder_print();
};

#endif