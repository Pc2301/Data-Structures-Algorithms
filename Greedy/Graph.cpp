#include<Graph.h>

Graph::Graph()
{
	this->vertices=0;
}

Graph::Graph(int V)
{
	this->vertices=V;

	adjacencyList= new List<int>[v];
}

void Graph::addEdge(int V,int W)
{
	if(V<vertices && W<vertices)
	{
		adjacencyList[v].push_back[w];
		adjacencyList[w].push_back[v];
	}
}