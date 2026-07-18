#include <iostream>
#include <vector>

using namespace std;

int n;

bool isPossible(vector<int> &rolls, int pos, int i)
{
    if (i == n)
        return pos % 360 == 0;

    return isPossible(rolls, pos + rolls[i], i + 1) || isPossible(rolls, pos - rolls[i], i + 1);

    return false;
}

int main()
{
    cin >> n;

    vector<int> rolls(n);

    for(int &aux:rolls)
    {
        cin >> aux;
    }

    if(isPossible(rolls, 0, 0))
        cout << "SIM";
    else
        cout << "NAO";

    return 0;
}
