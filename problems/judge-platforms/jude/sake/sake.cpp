#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


bool ok(int budget, vector<int> &prices, int guess)
{
    return budget < prices[guess];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n_stores;
    cin >> n_stores;
    vector<int> bottle_prices(n_stores);

    for(int &aux:bottle_prices)
    {
        cin >> aux;
    }
    sort(bottle_prices.begin(), bottle_prices.end());

    int days, budget;
    cin >> days;

    for(int i = 0; i < days; i++)
    {
        cin >> budget;

        int left = 0;
        int right = bottle_prices.size();

        while(left < right)
        {
            int mid = left + (right - left) / 2;

            if(ok(budget, bottle_prices, mid)) right = mid;
            else left = mid+1;
        }

        if(left != bottle_prices.size()+1)
        {
            cout << left;
        } else {
            cout << 0;
        }

        if(i != days-1) cout << '\n';
    }

    return 0;
}
