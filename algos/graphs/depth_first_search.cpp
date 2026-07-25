#include <iostream>
#include <vector>

using namespace std;

void dfsRec(const vector<vector<int>>& adjList, vector<bool>& visited, int s, vector<int>& tree)
{
    visited[s] = true;

    tree.push_back(s);

    for(int i : adjList[s])
        if(visited[i] == false)
            dfsRec(adjList, visited, i, tree);
}

vector<int> dfsTree(const vector<vector<int>>& adjList)
{
    vector<int> tree;
    vector<bool> visited(adjList.size());

    int starting_point = 0;

    dfsRec(adjList, visited, starting_point, tree);

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

    vector<int> tree = dfsTree(adjList);

    for(int i = 0; i < n; i++)
    {
        if(i != 0)
            cout << " ";

        cout << tree[i];
    }
}
