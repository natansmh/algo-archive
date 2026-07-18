#include <iostream>
#include <vector>

using namespace std;

// Solving Knight's Tour problem on an NxN board
// starting from position (x,y) with a backtracking approach

int n;

vector<pair<int,int>> moves =
{
    {2,1}, {-2,1}, {2,-1}, {-2,-1}, {1,2}, {-1,2}, {1,-2}, {-1,-2}
};

bool validPosition(vector<vector<int>> &board, int x, int y)
{
    return
        x >= 0 &&
        y >= 0 &&
        x < n &&
        y < n &&
        board[x][y] == 0;
}

bool backtracking(vector<vector<int>> &board, int x, int y)
{
    if(board[x][y] == n*n)
        return true;

    int x2, y2;
    for(auto mov: moves)
    {
        x2 = x + mov.first;
        y2 = y + mov.second;

        if(validPosition(board, x2, y2))
        {
            board[x2][y2] = board[x][y] + 1;
            if(backtracking(board, x2, y2))
                return true;
            board[x2][y2] = 0;
        }
    }

    return false;
}

int main()
{
    int x, y;
    cin >> n >> x >> y;

    vector<vector<int>> board(n, vector<int>(n, 0));
    board[x][y] = 1;

    if(!backtracking(board, x, y))
    {
        cout << "No solution";
        exit(0);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << board[i][j];

            if(j < n-1)
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
