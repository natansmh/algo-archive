#include <algorithm>
#include <iostream>
#include <vector>

#define ll long long

using namespace std;

bool check(ll x, ll op, int m, vector<int> &v)
{
    ll cost = 0;

    for(int i = m; i >= 0; i--)
    {
        if (v[i] > x)
            cost += v[i] - x;

        if(cost > op) return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n_frag;
    ll max_op;
    cin >> n_frag >> max_op;

    vector<int> frags_p(n_frag);

    for(int &aux:frags_p)
    {
        cin >> aux;
    }
    sort(frags_p.begin(), frags_p.end());

    int median = frags_p.size() / 2;

    // guess the value that median can possibly assume
    // guess interval -> [frags_p[median] - max_op, frags_p[median]]

    ll l = frags_p[median] - max_op;
    ll r = frags_p[median];
    ll mid;

    while(l < r)
    {
        mid = l + (r-l) / 2;

        if(check(mid, max_op, median, frags_p)) r = mid;
        else l = mid+1;
    }
    cout << l;

    return 0;
}
