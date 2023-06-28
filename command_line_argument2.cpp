// Sum of prime numbers using Command Line Arguments.

#include <bits/stdc++.h>
using namespace std;

// boo isPrime(int num)
// {
//     if (num < 1)
//     {
//         return false;
//     }
//     for (int i = 2; i <= sqrt(num); i++)
//     {
//         if (num % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        cout << "Please provide two command line arguments.\n";
        return 1;
    }
    int n1 = atoi(argv[1]);
    int lower = n1;
    int n2 = atoi(argv[2]);
    int upper = n2;
    int sum = 0;
    cout << argv[0] << argv[1] << argv[2];
    for (int i = lower + 1; i <= upper; i++)
    {
        int flag = 1;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            sum = sum + i;
        }
    }
    cout << "Sum of Prime numbers are " << sum << endl;
    return 0;
}