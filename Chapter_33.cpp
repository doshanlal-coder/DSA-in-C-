//PROBLEMS ON recursion - 6

#include <iostream>
using namespace std;

//PROBLEM? given an array of n integers and a target value x. Print whether x exists in the array or not.

//Constraints: 0<=n<=1e6  ,   -1e8<=x<=1e8   ,   -1e8<=a[i]<=1e8
//input:  n=8, x=14, array={4,12,54,14,3,8,6,1}
//Output:  Yes

// void check(int *arr, int n, int x){
//     if(n==0) {
//         cout<<"NO";
//         return;
//     }
//     if(x==arr[n-1]){
//         cout<< "Yes";
//     }
//     else{
//         check(arr,n-1,x);
//     }

// }

// int main (){
//     int n,x;
//     cout<<"Enter Number of Integers n:";
//     cin>>n;
//     cout<<"Enter Target Value x:";
//     cin>>x;
//     int arr[n];
//     for(int i=0; i<n;i++){
//         cin>>arr[i];
//     }
//     check(arr,n,x);
// }

//ORRR
//can be done using bool........




//PROBLEM ? Given an array of integers, print sums of all subsets in it. Output can be printed in any order:

//Input:  arr[]={2,3}
//Ouput:  0 2 3 5


//Input:  arr[]={2,4,5}
//Output: 0 2 4 5 6 7 9 11

// #include <vector>
// void subSetSum(int *arr, int n, int idx, int sum, vector<int> &result){
//     //base case
//     if(idx == n){
//         result.push_back(sum);
//         return;
//     }
//     subSetSum(arr, n, idx+1, sum + arr[idx], result); //Pick the ith element
//     subSetSum(arr, n, idx+1, sum, result);            //Do not pick the ith element    
// }
// int main (){
//     int n;
//     int idx;
//     cout<<"Length:";
//     cin>>n;
//     vector <int> result;
//     int arr[n];
//     for(int i=0; i<n;i++){
//         cin>>arr[i];
//     }
//     subSetSum(arr,n,0,0,result);
//     for(int i=0; i<result.size();i++){
//         cout<<result[i]<<" ";
//     }
//     return 0;
// }