////Merge Sort Algorithm

#include <iostream>
using namespace std;

// Merging to sorted array together to create new sorted array
// #include <vector>
// int main()
// {
//     vector<int> vec1 = {1, 3, 5};
//     vector<int> vec2 = {4, 6, 7, 8};
//     int n = vec1.size() + vec2.size();
//     vector<int> merge = {};

//     int ptr1 = 0;
//     int ptr2 = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (vec1[ptr1] > vec2[ptr2])
//         {
//             merge.push_back(vec2[ptr2]);
//             ptr2++;
//         }
//         else
//         {
//             merge.push_back(vec1[ptr1]);
//             ptr1++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << merge[i] << " ";
//     }
//     return 0;
// }

// ###############################################################
// DIVIDE AND CONQUERE ALGORITHM
// ###############################################################

// Divide problem into subproblem then solving subproblems and then combining then to get final output;


void merge(int arr[], int l, int mid, int r)
{
    int an = mid - l + 1;
    int bn = r - mid;
    
    // Create temporary arrays
    // Note: Using dynamic arrays or vectors is standard C++, but this is 
    // the direct fix for your stack-allocated approach.
    int* a = new int[an];
    int* b = new int[bn];
    
    for (int i = 0; i < an; i++)
    {
        a[i] = arr[l + i];
    }
    for (int j = 0; j < bn; j++)
    {
        b[j] = arr[mid + 1 + j];
    }
    
    int i = 0, j = 0;
    int k = l; // CRITICAL FIX: k must start at 'l', not 0

    while (i < an && j < bn)
    {
        if (a[i] < b[j])
        {
            arr[k++] = a[i++];
        }
        else
        {
            arr[k++] = b[j++];
        }
    }
    while (i < an)
    {
        arr[k++] = a[i++];
    }
    while (j < bn)
    {
        arr[k++] = b[j++];
    }

    // Clean up dynamically allocated memory
    delete[] a;
    delete[] b;
}

void mergeSort(int arr[], int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main()
{
    int arr[] = {2, 1, 4, 3, 5, 6, 8, 7, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}