#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {1, 3, 3, 5, 7, 9};
    int target = 3;

    int left = 0;
    int right = v.size();

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (v[mid] <= target)
        {
            // Aqui é diferente do lower_bound: pula os iguais também
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }

    if (left != v.size())
        cout << v[left];
    else
        cout << "Não existe elemento maior que " << target << " no vetor\n";

    return 0;
}
