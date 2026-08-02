#include <iostream>
#include <vector>
#include <climits>
#include <queue>

using namespace std;

const int INF = INT_MAX;

struct Edge {
    int start;
    int dest;
    int weight;
};

void bellman_ford(const vector<Edge>& edges, const vector<vector<int>>& adjList, int V, int s, int a)
{
    vector<int> dist(V+1, INF);

    dist[s] = 0;

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

    if(dist[a] == INF)
    {
        cout << "IMPOSSIVEL";
        return;
    }

    queue<int> q;
    vector<bool> visited(V+1, false);

    for (const Edge& e : edges)
    {
        if (dist[e.start] != INF &&
            dist[e.dest] > dist[e.start] + e.weight)
        {
            q.push(e.dest);
            visited[e.dest] = true;
        }
    }

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : adjList[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }

    if (visited[a])
    {
        cout << "IMPOSSIVEL";
        return;
    }

    cout << dist[a];
}

int main()
{
    int V, E, s, a;
    cin >> V >> E;
    cin >> s >> a;

    vector<Edge> edges(E+1);
    vector<vector<int>> adjList(V + 1);

    int u, v, weight;
    for(int i = 1; i < E+1; i++)
    {
        cin >> u >> v >> weight;
        edges[i] = {u, v, weight};
        adjList[u].push_back(v);
    }

    bellman_ford(edges, adjList, V, s, a);

    return 0;
}
