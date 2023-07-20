#include "Graph.h"

void Graph::addEdge(int src, int dest)
{
    graph_map[src].insert(dest);
}

bool Graph::checkPathDFS(int src, int dest)
{
    set<int> visited_set;
    return checkPathDFS(src, dest, visited_set);
}

bool Graph::checkPathDFS(int src, int dest, set<int>& visited_set)
{
    // mark as visited
    visited_set.insert(src);

    // check if reached destination
    if (src == dest)
    {
        return true;
    }

    // Loop through set of node
    set<int>::iterator it;
    for (it = graph_map[src].begin(); it != graph_map[src].end(); it++)
    {
        // if not visited, do dfs
        if (visited_set.find(*it) == visited_set.end())
        {
            if (checkPathDFS(*it, dest, visited_set))
            {
                return true;
            }
        }
        
    }
    
    return false;
}

void Graph::addSetToQueue(set<int>& visited, set<int>& graph_set, queue<int>& to_visit)
{
    // add set to queue only if not visisted
    set<int>::iterator it;
    for (it = graph_set.begin(); it != graph_set.end(); it++)
    {
        if (visited.find(*it) == visited.end())
        {
            visited.insert(*it);
            to_visit.push(*it);
        }
    }

}

bool Graph::checkPathBFS(int src, int dest)
{
    set<int> visited;
    queue<int> to_visit;

    to_visit.push(src);
    visited.insert(src);

    while (!to_visit.empty())
    {
        if (to_visit.front() != dest)
        {
            addSetToQueue(visited, graph_map[to_visit.front()], to_visit);
            to_visit.pop();
        }
        else
        {
            return true;
        }
    }
    
    return false;
}