#include <iostream>
#include <unordered_map>
#include <list>

using namespace std;

class graph {
public:
    unordered_map<int, list<int>> adj;  // Adjacency list to store the graph

    void addEdge(int u, int v, bool direction) {
        adj[u].push_back(v);  // Fixed typo: changed 'add' to 'adj'
        if (direction == 0) {
            adj[v].push_back(u);  // If undirected, add edge in both directions
        }
    }

    void printAdjList() {
        for (auto i : adj) {
            cout << i.first << " -> ";
            for (auto j : i.second) {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of nodes: " << endl;  // Changed from "no of Edge" to be more accurate
    cin >> n;

    int m;
    cout << "Enter the number of edges: " << endl;  // Fixed typo: "od" to "of"
    cin >> m;

    graph g;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;  // Fixed: changed comma to space for input
        // Create an undirected graph
        g.addEdge(u, v, 0);
    }
    g.printAdjList();
    return 0;
}