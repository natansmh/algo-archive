#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int &aux:arr)
    {
        cin >> aux;
    }

    int L = 0;
    int R = arr.size() - 1;
    int max_value = min(arr[L],arr[R]) * R;

    for(int i = R-1; i > 0; i--)
    {
        if(arr[L] < arr[R])
            L++;
        else
            R--;

        int aux = min(arr[L],arr[R]) * i;

        if(aux > max_value)
            max_value = aux;
    }

    cout << max_value;

    return 0;
}
