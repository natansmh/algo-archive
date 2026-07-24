#include <iostream>
#include <vector>

using namespace std;

struct Flavor
{
    int ai;
    int bi;
    int ci;
    int di;
};

int processWheys(int n, int m, int c0, int d0, vector<Flavor>& flavors)
{
    vector<int> dp(n + 1);

    for(int i = c0; i <= n; i++)
    {
        dp[i] = max(dp[i], dp[i - c0] + d0);
    }

    for(int i = 0; i < m; i++)
    {
        int k = flavors[i].ai / flavors[i].bi;

        for(int j = 0; j < k; j++)
        {
            for(int w = n; w >= flavors[i].ci; w--)
            {
                dp[w] = max(dp[w], dp[w - flavors[i].ci] + flavors[i].di);
            }
        }
    }

    return dp[n];
}

int main()
{
    int n, m, c0, d0;

    cin >> n >> m >> c0 >> d0;

    vector<Flavor> flavors(m);

    for(int i = 0; i < m; i++)
    {
        cin >> flavors[i].ai >> flavors[i].bi >> flavors[i].ci >> flavors[i].di;
    }

    cout << processWheys(n, m, c0, d0, flavors);
}
