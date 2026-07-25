#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> bfsTree(const vector<vector<int>>& adjList)
{
    vector<int> tree;
    vector<bool> visited(adjList.size());
    queue<int> q;

    int s = 0;

    visited[s] = true;
    q.push(s);

    while(!q.empty())
    {
        int current = q.front();
        q.pop();
        tree.push_back(current);

        for(int i : adjList[current])
        {
            if(!visited[i])
            {
                visited[i] = true;
                q.push(i);
            }
        }
    }

    return tree;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adjList(n);

    int x, y;
    for(int i = 0; i < m; i++)
    {
        cin >> x >> y;

        adjList[x].push_back(y);
    }

    vector<int> tree = bfsTree(adjList);

    for(int i = 0; i < n; i++)
    {
        if(i != 0)
            cout << " ";

        cout << tree[i];
    }
}
