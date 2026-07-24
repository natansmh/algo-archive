#include <iostream>
#include <vector>

// Problem:
// Given a rod of lenght n that can be split up in parts and the selling price of each rod size,
// what is the optimal split to maximize profit?

// Dynamic Programming approach:
// Let dp[i] be the maximum profit obtainable from a rod of length i.

using namespace std;

int maxProfit(int n, const vector<int> &prices)
{
    vector<int> dp(n+1,-1);
    dp[0] = 0;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            dp[i] = max(dp[i], dp[i-j-1] + prices[j]);
        }
    }

    return dp[n];
}

int main()
{
    int n;
    cin >> n;

    vector<int> prices(n);

    for(int& aux : prices)
    {
        cin >> aux;
    }

    int ans = maxProfit(n, prices);

    cout << ans;
}
