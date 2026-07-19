#include <iostream>

using namespace std;

int quickestShootout(const string &prediction)
{
    int f_sum1 = 0, s_sum1 = 0;
    int f_sum2 = 0, s_sum2 = 0;

    int remainingOdd = 5, remainingEven = 5;

    for(int i = 0; i < 10; i++)
    {
        bool firstTeam = i % 2 == 0;

        if(firstTeam)
            remainingEven--;
        else
            remainingOdd--;

        if(prediction[i] == '?')
        {
            // first team scenario
            if(firstTeam)
                f_sum1++;

            // second team scenario
            else
                s_sum2++;
        }
        else
        {
            int goal = prediction[i] - '0';

            if(firstTeam)
            {
                f_sum1 += goal;
                f_sum2 += goal;
            }
            else
            {
                s_sum1 += goal;
                s_sum2 += goal;
            }
        }

        if( (f_sum1-s_sum1 > remainingOdd) || (s_sum2-f_sum2 > remainingEven) )
            return i + 1;
    }

    return 10;
}

int main()
{
    string prediction;
    cin >> prediction;

    int min_kicks = quickestShootout(prediction);

    cout << min_kicks;

    return 0;
}
