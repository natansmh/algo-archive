#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Schedule
{
    int start;
    int end;
};

bool compare(const Schedule& a, const Schedule& b)
{
    return a.end < b.end;
}

int processSchedules(const vector<Schedule>& schedules)
{
    int count = 0;
    int t = 0;

    for(auto& schedule:schedules)
    {
        if(schedule.start >= t)
        {
            count++;
            t = schedule.end;
        }
    }

    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n;
    cin >> n;

    vector<Schedule> schedules(n);


    int h1, m1, h2, m2;

    for(auto& schedule:schedules)
    {
        cin >> h1 >> m1 >> h2 >> m2;

        schedule.start = h1 * 60 + m1;
        schedule.end   = h2 * 60 + m2;
    }
    sort(schedules.begin(), schedules.end(), compare);

    cout << processSchedules(schedules);
}
