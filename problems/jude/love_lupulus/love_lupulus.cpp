#include <iostream>
#include <vector>

using ll = long long;
using namespace std;

ll chooseBeers(const int n, const vector<ll> f0, const vector<ll> f1)
{
    ll max_flavor = 0;

    vector<ll> dp0(n);
    vector<ll> dp1(n);

    ll best_dp0 = 0;
    ll best_dp1 = 0;

    for(int i = 0; i < n; i++)
    {
        dp0[i] = f0[i] + best_dp1;
        dp1[i] = f1[i] + best_dp0;

        max_flavor = max(dp0[i], dp1[i]);

        best_dp0 = max(best_dp0, dp0[i]);
        best_dp1 = max(best_dp1, dp1[i]);
    }

    return max_flavor;
}

int main()
{
    int n;
    cin >> n;

    vector<ll> pale_ale(n);
    vector<ll> lager(n);

    for(ll& aux:pale_ale)
    {
        cin >> aux;
    }
    for(ll& aux:lager)
    {
        cin >> aux;
    }

    cout << chooseBeers(n, pale_ale, lager);
}
