#include <iostream>
#include <vector>

using namespace std;

// prefix sum algo, used when you want the sum of the elements between L and R of an given array

vector<int> buildPrefixSum(const vector<int>& arr)
{
    int n = arr.size();
    vector<int> prefix(n + 1, 0); // prefix[0] = 0 for convenience

    for(int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i - 1];
    }

    return prefix;
}

int queryPrefixSum(const vector<int>& prefix, int L, int R)
{
    return prefix[R + 1] - prefix[L];
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr), cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);

    for(int &aux:arr)
    {
        cin >> aux;
    }

    int L, R;
    cin >> L >> R;

    vector<int> prefix = buildPrefixSum(arr);
    int ans = queryPrefixSum(prefix, L, R);

    cout << ans;

    return 0;
}
