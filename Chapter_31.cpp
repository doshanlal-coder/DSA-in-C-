//PROBLEMs oN RECURSION- 4

#include <iostream> 
using namespace std;

//PROBLEM? Given a number n. Find the increasing sequence from 1 to n without using any loop;

// void printSequence (int n, int idx){
//     if(idx>n) return ;
//     cout<<idx<<" ";
//     printSequence(n,idx+1);

// }
// int main (){
//     int n;
//     cin>>n;
//     int idx=1;
//     printSequence(n,idx);
//     return 0;
// }

///OR 

// void printSequence (int n){
//     if(n<1) return ;
//     printSequence(n-1);
//     cout<<n<<" ";
// }
// int main (){
//     int n;
//     cin>>n;
//     printSequence(n);
//     return 0;
// }



//PROBLEM? Given a number num and a value k. Print k multiples of num.
//Constraints k>0
//Input: num=12, k=5
//Output: 12,24,36,48,50.

// void table(int num, int k){
//     if(k<1) return ;
//     table(num,k-1);
//     cout<<num*k<<" "; 
// }
// int main (){
//     int num;
//     int k;
//     cin>>num>>k;
//     table(num,k);
//     return 0;
// }


//PROBLEM? Given a number n. Find the sum of natural numbers till n but with alternate signs.
//means if n=5 then you have to return 1-2+3-4+5 = 3

//eg. in: n=10  out: -5



// int fun(int n){
//     if(n==1) return 1;

//     return fun(n-1)+ ((n%2==0)? -n : n);

// }
// int main (){
//     int n;
//     cin>>n;
//     cout<<fun(n);
//     return 0; 
// }