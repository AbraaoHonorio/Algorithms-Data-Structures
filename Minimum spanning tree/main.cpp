#include <stdio.h>
#include <limits.h>
#include <iostream>
#include <vector>
 
int V = 0;
 
int minKey(int key[], bool mstSet[])
{
   int min = INT_MAX, min_index;
 
   for (int v = 0; v < V; v++)
     if (mstSet[v] == false && key[v] < min)
         min = key[v], min_index = v;
 
   return min_index;
}
 
int printMST(int parent[], int n, std::vector<std::vector<int>> graph)
{
   printf("Edge   Weight\n");
   for (int i = 1; i < V; i++)
      printf("%d - %d    %d \n", parent[i], i, graph[i][parent[i]]);
}
 
void primMST(std::vector<std::vector<int>> graph)
{
     int parent[V]; 
     int key[V];   
     bool mstSet[V];
 
     // Initialize all keys as INFINITE
     for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;
 
     key[0] = 0;
     parent[0] = -1;
 
     for (int count = 0; count < V-1; count++)
     {
        int u = minKey(key, mstSet);
        mstSet[u] = true;
        for (int v = 0; v < V; v++)
          if (graph[u][v] && mstSet[v] == false && graph[u][v] <  key[v])
             parent[v]  = u, key[v] = graph[u][v];
     }
 
     printMST(parent, V, graph);
}
 
int main()
{


    std::cin >> V;

    std::vector<std::vector<int>> graph;
    
    graph.resize(V);
    for(auto& g : graph) g.resize(V);

    int input;
    int begin = 1;
    int colum = 0;
    int line = 0;
    while(std::cin >> input){
        if(colum == V-1){
            colum = ++begin;
            ++line;
        }
        else ++colum;
        graph[line][colum] = input;
        graph[colum][line] = input;
    }

    for(unsigned int i = 0; i < V; i++){
        for(unsigned int j = 0; j < V; j++){
            std::cout << graph[i][j] << " ";
        }
        std::cout << std::endl;
    }

    primMST(graph);
 
    return 0;
}
