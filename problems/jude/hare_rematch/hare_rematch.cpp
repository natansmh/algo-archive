#include <iostream>
#include <vector>
#include <algorithm>

using ll = long long;
using namespace std;

struct Question
{
    int value;
    ll time;
    int factor;
    int index;
};

bool compare(Question& a, Question& b)
{
    return a.factor > b.factor;
}

int processTest(vector<Question>& questions, ll time)
{
    int count = 0;

    for(Question question:questions)
    {
        if(question.time <= time)
        {
            time -= question.time;
            count += question.value;
        }
        else if(time > 0)
        {
            double propValue = ((double)time / question.time) * question.value;

            count += (int)propValue;
            break;
        }
    }

    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, x;
    ll t, m;

    cin >> n >> t >> m >> x;

    vector<Question> questions(n);

    int aux1, aux2;
    for(int i = 0; i < n; i++)
    {
        cin >> aux1 >> aux2;

        questions[i].value = aux1;
        questions[i].time = aux2;
        questions[i].factor = aux1/aux2;
        questions[i].index = i;
    }
    sort(questions.begin(), questions.end(), compare);

    int turtle = processTest(questions, t);
    int hare = processTest(questions, m*x);

    if(turtle > hare)
        cout << "TARTARUGA";
    else if(hare > turtle)
        cout << "LEBRE";
    else
        cout << "EMPATE";
}
