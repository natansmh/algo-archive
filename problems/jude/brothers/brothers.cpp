#include <iostream>
#include <vector>
#include <unordered_map>

using ll = long long;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n;
    cin >> n;

    vector<ll> arr(n);

    ll aux;
    for(int i = 0; i < n; i++)
    {
        cin >> aux;

        if(i % 2 == 0)
            arr[i] = aux;
        else
            arr[i] = -aux;
    }

    unordered_map<ll, int> first;

    first[0] = -1;

    ll prefix = 0;

    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];

        if (first.count(prefix))
        {
            int L = first[prefix] + 1;
            int R = i;

            cout << L+1 << " " << R+1;
            exit(0);
        }

        first[prefix] = i;
    }

    cout << -1;

    return 0;
}
