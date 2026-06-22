/// BINARY SEARCH

#include <iostream>
using namespace std;
#include <vector>

// int binarySearch(vector<int> &input, int target)
// {
//     // define search space
//     int lo = 0;                // start of search space
//     int hi = input.size() - 1; // end of search space

//     while (lo <= hi)
//     {
//         // calc midpoint for the search space
//         int mid = (lo + hi) / 2;
//         if (input[mid] == target)
//             return mid;
//         else if (input[mid] < target)
//         {
//             // discard the left of mid
//             lo = mid + 1;
//         }
//         else
//         {
//             // discard the right of mid
//             hi = mid - 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> input(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> input[i];
//     }
//     int target;
//     cin >> target;
//     cout << binarySearch(input, target) << " ";
//     return 0;
// }

// Time Complexity= O(logN)
// Space Complexity= O(1)

// Writing the Problem Recursively

int binarySearch(vector<int> &input, int target, int lo, int hi)
{
    if (lo > hi)
        return -1;
    int mid = (lo + hi) / 2;
    if (input[mid] == target)
        return mid;
    if (input[mid] < target)
    {
        return binarySearch(input, target, mid + 1, hi);
    }
    else
    {
        return binarySearch(input, target, lo, mid - 1);
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> input(n);
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    int target;
    cin >> target;
    cout << binarySearch(input, target, 0, n - 1) << " ";
    return 0;
}
