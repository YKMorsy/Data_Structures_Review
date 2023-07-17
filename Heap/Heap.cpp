#include <iostream>
#include "Heap.h"
using namespace std;


Heap::Heap()
{
    size = 0;
    capacity = 10;
    arr = new int(capacity);
}

Heap::Heap(int capacity)
{
    size = 0;
    this->capacity = capacity;
    arr = new int(capacity);
}

Heap::~Heap()
{
    delete [] arr;
}

void Heap::printArr()
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void Heap::insert(int value)
{
    expandSizeCheck();
    arr[size] = value;
    heapifyUp(size);
    size++;
}

void Heap::swap(int index1, int index2)
{
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

void Heap::heapifyDown()
{
    int index = 0;
    while((index < size) && ((arr[index] > arr[getLeftChildIndex(index)]) || (arr[index] > arr[getRightChildIndex(index)])))
    {
        // find index of smaller child
        int swap_idx;
        if (arr[getLeftChildIndex(index)] < arr[getRightChildIndex(index)])
        {
            swap_idx = getLeftChildIndex(index);
        }
        else
        {
            swap_idx = getRightChildIndex(index);
        }

        // swap
        swap(index, swap_idx);
        index = swap_idx;
    }
}

void Heap::heapifyUp(int index)
{
    while ((index > 0) && (arr[index] < arr[getParentIndex(index)]))
    {
        swap(index, getParentIndex(index));
        index = getParentIndex(index);
    }
}

void Heap::expandSizeCheck()
{
    if (size == capacity)
    {
        capacity *= 2;
        int *newArr = new int[capacity];
        memcpy(newArr, arr, capacity);
        delete [] arr;
        arr = newArr;
        delete newArr;
    }
}

int Heap::peek()
{
    return arr[0];
}

void Heap::poll()
{
    arr[0] = arr[size];
    heapifyDown();
    size--;
}

