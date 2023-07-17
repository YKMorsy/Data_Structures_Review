#ifndef HEAP_H
#define HEAP_H

class Heap
{
private:
    int size;
    int capacity;
    int *arr;

    int getParentIndex(int index) {return (index-1)/2;}
    int getLeftChildIndex(int index) {return (index*2)+1;}
    int getRightChildIndex(int index) {return (index*2)+2;}

    void swap(int, int);
    void expandSizeCheck();
    void heapifyUp(int);
    void heapifyDown();

public:

    Heap();

    Heap(int);

    ~Heap();

    void insert(int);
    // return minimum (root)
    int peek();
    // extract minimum (root)
    void poll();
    void printArr();
};


#endif