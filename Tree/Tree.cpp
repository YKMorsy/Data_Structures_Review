#include <iostream>
#include "Tree.h"
using namespace std;

void Tree::insert(int val)
{
    Node *newNodePointer = new Node(val);

    // insert root if tree is empty
    if (rootPointer == nullptr)
    {
        rootPointer = newNodePointer;
        return;
    }
    // traverse tree to insert
    else
    {
        Node *curNodePointer = rootPointer;
        Node *prevPointer = curNodePointer;
        
        // traverse until pointer to nonexistant node is reached
        while(curNodePointer != nullptr)
        {
            prevPointer = curNodePointer;

            // traverse left
            if(newNodePointer->value <= curNodePointer->value)
            {
                curNodePointer = curNodePointer->left;
            }
            // traverse right
            else
            {
                curNodePointer = curNodePointer->right;
            }
        }

        // insert left
        if(newNodePointer->value <= prevPointer->value)
        {
            prevPointer->left = newNodePointer;
        }
        // insert right
        else
        {
            prevPointer->right = newNodePointer;
        }
    }
}

void Tree::inorder_print()
{
    Tree::inorder_print(rootPointer);
}

void Tree::inorder_print(Node *nodePointer)
{
    if (nodePointer != nullptr)
    {
        // left
        if(nodePointer->left != nullptr)
        {
            Tree::inorder_print(nodePointer->left);
        }

        // root
        cout << nodePointer->value << " ";

        // right
        if(nodePointer->right != nullptr)
        {
            Tree::inorder_print(nodePointer->right);
        }
    }   
}

bool Tree::contains(int value)
{
    return contains(rootPointer, value);
}

bool Tree::contains(Node *nodePointer, int value)
{
    // iterate until null ptr is reached
    if (nodePointer != nullptr)
    {
        // value not found
        if (nodePointer->value != value)
        {
            // iterate over left nodes
            bool leftCheck = Tree::contains(nodePointer->left, value);

            if (leftCheck == false)
            {
                // if not found in left nodes, iterate over right nodes
                return Tree::contains(nodePointer->right, value);
            }
            else
            {
                return leftCheck;
            }
            
        }
        // value found
        else
        {
            return true;
        }
    }

    return false;
}


