#include <iostream>
#include <vector>
#include <climits>

using namespace std;

const int INF = INT_MAX;

struct Edge {
    int start;
    int dest;
    int weight;
};

void bellman_ford(const vector<Edge>& edges, int V, int src)
{
    vector<int> dist(V, INF);

    dist[src] = 0;

    for (int i = 0; i < V - 1; i++)
    {
        bool updated = false;

        for (const Edge& e : edges)
        {
            if (dist[e.start] == INF)
                continue;

            if (dist[e.dest] > dist[e.start] + e.weight)
            {
                dist[e.dest] = dist[e.start] + e.weight;
                updated = true;
            }
        }

        if(!updated)
            break;
    }

    for (const Edge& e : edges)
    {
        if (dist[e.start] != INF && dist[e.dest] > dist[e.start] + e.weight)
        {
            cout << "Negative Cycle";
            return;
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

    vector<Edge> edges(E);

    int u, v, weight;
    for(int i = 0; i < E; i++)
    {
        cin >> u >> v >> weight;
        edges[i] = {u, v, weight};
    }

    bellman_ford(edges, V, 0);

    return 0;
}
