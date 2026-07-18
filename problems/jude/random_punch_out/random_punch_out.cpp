#include <iostream>
#include <vector>

using ll = long long;

using namespace std;

int maxWindowSize(vector<int>& arr, const ll h, const int n)
{
    int left = 0;
    ll window_value = 0;
    int window_size = 0;

    while (window_size < n && window_value + arr[window_size] <= h)
    {
        window_value += arr[window_size];
        window_size++;
    }

    for(int i = window_size; i < n; i++)
    {
        window_value = window_value - arr[left] + arr[i];

        while ( (i + 1 < n) && (window_value + arr[i + 1] <= h) )
        {
            i++;
            window_value += arr[i];
            window_size++;
        }

        left++;
    }

    return window_size;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n;
    ll h;
    cin >> n >> h;

    vector<int> arr(n);

    for(int &aux:arr)
    {
        cin >> aux;
    }

    int best_run = maxWindowSize(arr, h, n);
    cout << best_run;

    return 0;
}
