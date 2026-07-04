#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// this implementation uses a two pointers approach to solve the classic two sum problem

vector<int> twoPointers(vector<int>& arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;

    while(left < right)
    {
        int sum = arr[left] + arr[right];

        if(sum == target)
            return {left, right};

        else if(sum < target)
            left++;

        else
            right--;
    }

    return {-1,-1};
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, target;
    cin >> n >> target;

    vector<int> arr(n);

    for(int &aux:arr)
    {
        cin >> aux;
    }
    sort(arr.begin(), arr.end());

    vector<int> ans = twoPointers(arr, target);

    cout << "Left: " << ans[0] << " | Right: " << ans[1] << "\n";

    return 0;
}
