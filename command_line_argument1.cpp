// Sum of two numbers

// #include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[]) // where argc is argument count and argv is argument vector
{
    int a, b;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    cout << "Number of argument is " << argc << endl; // number of argument is 3 as when have start from 1
    cout << "Sum of " << a << ", " << b << " is " << (a + b) << endl;
    return 0;
}