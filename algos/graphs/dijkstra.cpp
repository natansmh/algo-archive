#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

struct Edge {
    int dest;
    int weight;
};

struct State {
    int vertex;
    int distance;
};

struct CompareState {
    bool operator()(const State& a, const State& b) const {
        return a.distance > b.distance;
    }
};

void addEdge(vector<vector<Edge>>& adjList, int u, int v, int weight)
{
    adjList[u].push_back( {v, weight} );
    adjList[v].push_back( {u, weight} );
}

void dijkstra(const vector<vector<Edge>>& adjList, int V, int src)
{
    priority_queue<State, vector<State>, CompareState> pq;
    vector<int> dist(V, INT_MAX);

    pq.push( {src, 0} );
    dist[src] = 0;

    while (!pq.empty())
    {
        const State curr = pq.top();
        pq.pop();

        int u = curr.vertex;

        if(curr.distance > dist[u])
            continue;

        for (const Edge& edge : adjList[u]) {
            int v = edge.dest;
            int wt = edge.weight;

            if (dist[v] > dist[u] + wt) {
                dist[v] = dist[u] + wt;
                pq.push( {v,dist[v]} );
            }
        }
    }

    cout << "Vertex\tDistance from Source\n";
    for (int i = 0; i < V; i++)
        cout << i << '\t' << dist[i] << '\n';
}

int main()
{
    int V, E;
    cin >> V >> E;

    vector<vector<Edge>> adjList(V);

    int u, v, weight;
    for(int i = 0; i < E; i++)
    {
        cin >> u >> v >> weight;
        addEdge(adjList, u, v, weight);
    }

    dijkstra(adjList, V, 0);

    return 0;
}
