#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int bfsPath(const vector<vector<int>>& adjList, int start, int target)
{
    vector<int> dist(adjList.size(), -1);
    queue<int> q;

    dist[start] = 0;
    q.push(start);

    while(!q.empty())
    {
        int current = q.front();
        q.pop();

        if(current == target)
            return dist[current];

        for(int neighbor : adjList[current])
        {
            if(dist[neighbor] == -1)
            {
                dist[neighbor] = dist[current] + 1;
                q.push(neighbor);
            }
        }
    }

    return -1;
}

int calculateRoute(int sr, int lr, int n, const vector<vector<int>>& adjList)
{
    vector<int> route = {sr, lr, n};
    int count = 1;

    int start = 1;

    for(int& target : route)
    {
        int distance = bfsPath(adjList, start, target);

        if (distance == -1)
            return -1;

        count += distance;
        start = target;
    }

    return count;
}

int main()
{
    int n, m, sr, lr;
    cin >> n >> m >> sr >> lr;

    vector<vector<int>> adjList(n+1);

    int x, y;
    for(int i = 0; i < m; i++)
    {
        cin >> x >> y;

        adjList[y].push_back(x);
        adjList[x].push_back(y);
    }

    int ans = calculateRoute(sr, lr, n, adjList);

    cout << ans;
}
