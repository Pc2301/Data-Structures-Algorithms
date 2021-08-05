using namespace std;
#include<list>
#include<vector>

class Graph
{
	int vertices;
	list<int> *adjacencyList;

public:
	Graph();
    Graph(int V);
    void addEdge(int V, int W);
    void greedyColoring();
};

