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

// int sum(int n){
//     if(n==1) return 1;
//     return n+sum(n-1);
// }
// int main (){
//     int n;
//     cin>>n;
//     cout<<sum(n);
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////
///In debug we can do dry run using it.. check lecture video to learn that///
/////////////////////////////////////////////////////////////////////////////


////Program To find nth fibonacci number...
//  0   1   1   2   3   5   8   13   21.......
// 0th 1st 2nd 3rd........ ............ . .  .nth 



//BASE CASE: 
        //if(n==0) return 0;
        //if(n==1) return 1;

//ASSUMPTION: lets assume fibo works correctly for n-1 & n-2
//SELF WORK: Sum of (n-1)th & (n-2)th fib 

// int fibo(int n){
//     if(n==0) return 0;      ///OR if(n=0 or n==1) return n;   // OR if(n=0 || n==1) return n;  ///this are base cases
//     if(n==1) return 1;   
//     return fibo(n-1)+fibo(n-2);     //recursive relation

// }
// int main (){
//     cout<<"Enter:";
//     int n;
//     cin >>n;
//     cout<<fibo(n);
//     return 0;
// }
