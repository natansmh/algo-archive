#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using ll = long long;
using namespace std;

struct Edge {
    int dest;
    ll weight;
    bool train;
};

struct Train {
    int dest;
    ll weight;
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

void addEdge(vector<vector<Edge>>& adjList, int u, int v, ll weight, bool train)
{
    adjList[u].push_back({v, weight, train});
    adjList[v].push_back({u, weight, train});
}

int dijkstra(const vector<vector<Edge>>& adjList, const vector<Train>& trains, int V, int src)
{
    priority_queue<State, vector<State>, CompareState> pq;
    vector<int> dist(V, INT_MAX);
    vector<bool> usedTrain(V, false);

    pq.push({src, 0});
    dist[src] = 0;

    while (!pq.empty())
    {
        const State curr = pq.top();
        pq.pop();

        int u = curr.vertex;

        if(curr.distance > dist[u])
            continue;

        for (const Edge& edge : adjList[u])
        {
            int v = edge.dest;
            ll wt = edge.weight;

            if (dist[v] > dist[u] + wt)
            {
                dist[v] = dist[u] + wt;

                usedTrain[v] = edge.train;

                pq.push({v,dist[v]});
            }
            else if(dist[v] == dist[u] + edge.weight)
            {
                if (!edge.train && usedTrain[v])
                    usedTrain[v] = false;
            }
        }
    }

    int removed = 0;

    for(Train t : trains)
    {
        if(dist[t.dest] < t.weight)
            removed++;
        else if (dist[t.dest] == t.weight && !usedTrain[t.dest])
            removed++;
    }

    return removed;
}

int main()
{
    int V, Er, Et;
    cin >> V >> Er >> Et;

    vector<vector<Edge>> adjList(V+1);
    vector<Train> trains(Et);

    int u, v;
    ll weight;
    for(int i = 0; i < Er; i++)
    {
        cin >> u >> v >> weight;
        addEdge(adjList, u, v, weight, 0);
    }

    for(int i = 0; i < Et; i++)
    {
        cin >> v >> weight;

        trains.push_back({v,weight});
        addEdge(adjList, 1, v, weight, 1);
    }

    int ans = dijkstra(adjList, trains, V+1, 1);
    cout << ans;
}
