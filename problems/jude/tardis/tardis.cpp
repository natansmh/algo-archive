#include <iostream>
#include <vector>

using namespace std;

struct Pos{
    int x;
    int y;
};

const vector<Pos> moves = { {1,0} , {-1,0} , {0,1} , {0,-1} };

bool validPosition(int x, int y, const vector<vector<char>>& grid, char target)
{
    return
        x >= 0 &&
        y >= 0 &&
        x < grid.size() &&
        y < grid[0].size();
}

bool dfs(const vector<vector<char>>& grid, const string& code, vector<vector<bool>>& visited, int x, int y, int index)
{
    visited[x][y] = true;

    if(index == code.size())
        return true;

    for(const Pos& move : moves)
    {
        int xi = x + move.x;
        int yi = y + move.y;
        if(validPosition(xi, yi, grid, code[index]) && !visited[xi][yi] && grid[xi][yi] == code[index])
        {
            if(dfs(grid, code, visited, xi, yi, index + 1))
                return true;
        }
    }

    visited[x][y] = false;
    return false;
}

bool checkCode(int n, int m, const string& code, const vector<vector<char>>& grid, const vector<Pos>& possibleStarts)
{
    int x, y;
    vector<vector<bool>> visited(n, vector<bool>(m));

    for(const Pos& start : possibleStarts)
    {
        x = start.x;
        y = start.y;

        if(dfs(grid, code, visited, x, y, 1))
            return true;
    }

    return false;
}

int main()
{
    int n,m;
    string w;

    cin >> n >> m;
    cin >> w;

    vector<vector<char>> grid(n, vector<char>(m));
    vector<Pos> possibleStarts;

    char aux;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> aux;
            grid[i][j] = aux;

            if(aux == w[0])
                possibleStarts.push_back({i,j});
        }
    }

    if(checkCode(n, m, w, grid, possibleStarts))
        cout << "SIM";
    else
        cout << "NAO";
}
