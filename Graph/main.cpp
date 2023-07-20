#include "Graph.h"

int main()
{
    Graph test;

    test.addEdge(0,1);
    test.addEdge(0,4);
    test.addEdge(1,0);
    test.addEdge(1,2);
    test.addEdge(1,3);
    test.addEdge(1,4);
    test.addEdge(2,1);
    test.addEdge(2,3);
    test.addEdge(3,1);
    test.addEdge(3,2);
    test.addEdge(3,4);
    test.addEdge(4,0);
    test.addEdge(4,1);
    test.addEdge(4,3);

    test.addEdge(5,6);
    test.addEdge(6,5);

    cout << test.checkPathDFS(0,3) << "\n";
    cout << test.checkPathDFS(0,5) << "\n";

    cout << test.checkPathBFS(0,3) << "\n";
    cout << test.checkPathBFS(0,5) << "\n";

    return 0;
}