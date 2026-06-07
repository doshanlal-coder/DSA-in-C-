///////Questions on Recursion 

#include <iostream>
using namespace std;

//PROBLEM  /Given an integer, find out the sum of its digits using recursion.

// int sumDig(int n){
//     if(n>0 and n<10) return n ;
//     int ans=n%10;
//     return ans+ sumDig(n/10);
// }
// int main (){
//     int n;
//     cout<<"ENTER:";
//     cin>>n;

//     cout<<sumDig(n);
// }


///OR
// int sumDig(int n){
//     if(n>0 and n<10) return n ;
//     return n%10+ sumDig(n/10);
// }
// int main (){
//     int n;
//     cout<<"ENTER:";
//     cin>>n;

//     cout<<sumDig(n);
// }




//PROBLEM / given two numbers p and q. Find the value p^q using recursive function.

// int power(int p , int q)
// {
//     if(q==0) return 1;
    
//     return p*power(p, q-1);
// }
// int main (){
//     int p, q;
//     cout<<"ENTER:p ";
//     cin>>p;
//     cout<<"ENTER:q ";
//     cin>>q;

//     cout<<power(p,q);
//     return 0;
// }



//can also be done by 