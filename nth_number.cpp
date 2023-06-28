// TCS NQT 2021 Exam Coding Questions
// Problem Statement:
// You are Given a number N, you need to find the N-th number whose prime factors includes 1,2,3,5
// in range 1 to 10^3 inclusive.
// If you are given a number 7, then output will be 8. Because
// 1 includes - 1
// 2 includes - 1,2
// 3 includes - 1,3
// 4 includes - 1,2,2
// 5 includes - 1,5
// 6 includes - 1,2,3
// 8 includes - 1,2,2,2

// (As 8 is the 7-th position so output will be 8)

// Input: 7
// Output: 8  (1,2,3,4,5,6,8)

// Soution >>>>>>>>>>>>>>>>>>>>>>>>>>>>>

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= 1000; i++)
    {
        int temp = i;
        while (temp % 2 == 0)
        {
            temp /= 2;
        }
        while (temp % 3 == 0)
        {
            temp /= 3;
        }
        while (temp % 5 == 0)
        {
            temp /= 5;
        }
        if (temp == 1)
        {
            count++;
        }
        if (count == n)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
