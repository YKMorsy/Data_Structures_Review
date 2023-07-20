#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <unordered_map>
#include <set>
#include <queue>
using namespace std;

class Graph
{
private:
    std::unordered_map<int, std::set<int>> graph_map;
    bool checkPathDFS(int, int, std::set<int>&);
    void addSetToQueue(std::set<int>&, std::set<int>&, std::queue<int>&);

public:
    Graph(){}
    void addEdge(int, int);
    bool checkPathDFS(int, int);
    bool checkPathBFS(int, int);
};

#endif
