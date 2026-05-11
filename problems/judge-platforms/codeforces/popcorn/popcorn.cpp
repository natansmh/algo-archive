#include <iostream>
#include <vector>

using namespace std;

bool ok(int N, int C, int pop_s, vector<int> &bags, int t)
{
    // guess time
    int max_pop_t = pop_s*t;
    int current_amount = 0;
    int needed_comp = 1;

    for(int i = 0; i < N; i++)
    {
        if(bags[i] > max_pop_t) return false;

        if(current_amount + bags[i] <= max_pop_t)
        {
            current_amount += bags[i];
        }
        else
        {
            needed_comp++;
            current_amount = bags[i];
        }
    }

    return needed_comp <= C;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int N, C, T, total_amount = 0;
    cin >> N >> C >> T;
    vector<int> bags(N);

    for(int &aux:bags)
    {
        cin >> aux;
        total_amount += aux;
    }

    // guess interval [1, total_amount / T]
    int l = 1;
    int r = total_amount/T;
    int mid;

    while(l<=r)
    {
        mid = l+(r-l)/2;

        if(ok(N, C, T, bags, mid)) r = mid-1;
        else l = mid+1;
    }

    cout << l << endl;

    return 0;
}
