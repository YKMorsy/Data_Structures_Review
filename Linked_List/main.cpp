#include "Linked_List.h"

int main()
{
    Linked_List ll;
    
    ll.insertNode(0);
    ll.insertNode(1);
    ll.insertNode(2);
    ll.insertNode(3);

    ll.getValue(2);

    ll.deleteNode(3);

    ll.printList();

    return 0;
}