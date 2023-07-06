/**********************************************************************
Question: Modify given array to a non-decreasing array by rotation

Given an array arr[] of size N (consisting of duplicates), the task is to check if the given array can be converted to a non-decreasing array by rotating it. If it’s not possible to do so, then print “No“. Otherwise, print “Yes“.

Examples:
Input: arr[] = {3, 4, 5, 1, 2}
Output: Yes
Explanation: After 2 right rotations, the array arr[] modifies to {1, 2, 3, 4, 5}

Input: arr[] = {1, 2, 4, 3}
Output: No

***********************************************************************/
// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to check if a
// non-decreasing array can be obtained
// by rotating the original array
void rotateArray(vector<int> &arr, int N)
{
    // Stores copy of original array
    vector<int> v = arr;

    // Sort the given vector
    sort(v.begin(), v.end());

    // Traverse the array
    for (int i = 1; i <= N; ++i)
    {

        // Rotate the array by 1
        rotate(arr.begin(),
               arr.begin() + 1, arr.end());

        // If array is sorted
        if (arr == v)
        {

            cout << "YES" << endl;
            return;
        }
    }

    // If it is not possible to
    // sort the array
    cout << "NO" << endl;
}

// Driver Code
int main()
{
    // Given array
    // vector<int> arr = {3, 4, 5, 1, 2};
    vector<int> arr = {1, 2, 3, 4};

    // Size of the array
    int N = arr.size();

    // Function call to check if it is possible
    // to make array non-decreasing by rotating
    rotateArray(arr, N);
}
