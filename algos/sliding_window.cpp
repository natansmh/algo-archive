#include <iostream>
#include <vector>

using namespace std;

int slidingWindow(vector<int>& arr, int window_size)
{
    int* left_value = &arr[0];
    int window_value = 0;
    int max_window_value;

    for(int i = 0; i < window_size; i++)
    {
        window_value += arr[i];
    }
    max_window_value = window_value;

    for(int i = window_size; i < arr.size(); i++)
    {
        int next_value = arr[i];
        window_value = window_value - *left_value + next_value;

        if(window_value > max_window_value)
            max_window_value = window_value;

        left_value++;
    }

    return max_window_value;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, window_size;
    cin >> n >> window_size;

    vector<int> arr(n);

    for(int &aux:arr)
    {
        cin >> aux;
    }

    int max_sum = slidingWindow(arr, window_size);
    cout << "Max sum with " << window_size << " digits: " << max_sum;

    return 0;
}
