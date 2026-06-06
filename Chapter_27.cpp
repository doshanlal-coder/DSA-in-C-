//// RECURSION

#include <iostream>
using namespace std;

//recursion does simply means solving bigger problem by solving smaller sub problems

///SEE NOTES!!!!!!



///Recursive code for Calculating Factorial of a given number n.
// int f(int n){
//     if(n==1){
//         return 1;
//     }
//     int ans = n * f(n-1);
//     return ans;
// }

// int main (){
//     cout<<"Enter: ";
//     int n;
//     cin>>n;
//     cout<<f(n);

//     return 0;
// }


//recursive code for calculation of sum of n natuaral numbers;

// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     int ans= n+sum(n-1);
//     return ans;
// }
// int main (){
//     int n;
//     cin>>n;
//     cout<<sum(n);
//     return 0;
// }


///OR

int sum(int n){
    if(n==1) return 1;
    return n+sum(n-1);
}
int main (){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}


