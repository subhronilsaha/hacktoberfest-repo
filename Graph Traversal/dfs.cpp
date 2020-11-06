#include <bits/stdc++.h> 
using namespace std; 
  
class Graph { 
    int v; 
    int e; 
    int** adj;

    public:
    // Constructor : Function to fill the empty adjacency matrix 
    Graph(int v, int e) { 
        this->v = v; 
        this->e = e; 
        adj = new int*[v]; 
        for (int row = 0; row < v; row++) { 
            adj[row] = new int[v]; 
            for (int column = 0; column < v; column++) { 
                adj[row][column] = 0; 
            } 
        } 
    }

    // Function to add an edge to the graph 
    void addEdge(int start, int e) { 
        // Considering a bidirectional edge 
        adj[start][e] = 1; 
        adj[e][start] = 1; 
    } 

    // Function to perform DFS on the graph 
    void DFS(int start, vector<bool>& visited) { 
    
        // Print the current node 
        cout << start << " "; 
    
        // Set current node as visited 
        visited[start] = true; 
    
        // For every node of the graph 
        for (int i = 0; i < v; i++) { 
            // If some node is adjacent to the current node 
            // and it has not already been visited 
            if (adj[start][i] == 1 && (!visited[i])) { 
                DFS(i, visited); 
            } 
        } 
    }
};
  
// Driver code 
int main() { 
    int v = 5, e = 4; 
  
    // Create the graph 
    Graph G(v, e); 
    G.addEdge(0, 1); 
    G.addEdge(0, 2); 
    G.addEdge(0, 3); 
    G.addEdge(0, 4); 
  
    vector<bool> visited(v, false); 
  
    // DFS 
    G.DFS(0, visited); 
}