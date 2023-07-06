// How to Calculate Armstrong Number between two Intervals.Topic : Armstrong Number between two Intervals..
#include <bits/stdc++.h>
using namespace std;

bool solve(int num)
{
    int sum = 0, temp = num;
    while (temp != 0)
    {
        int rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    if (sum == num)
    {
        cout << sum << endl;
        cout << "Armstrong Number " << sum << " ";
        return true;
    }
    return false;
}
int main()
{
    int start, end, count = 0;
    cin >> start >> end;
    for (int i = start; i <= end; i++)
    {
        bool res = solve(i);
        if (res)
        {
            count++;
        }
    }
    cout << "Number of Armstrong Number between Interval is:- " << count << endl;
    return 0;
}
