///PROBLEMs on RECURSION - 5

#include <iostream>
using namespace std;

//PROBLEM? given two numbers x and y. Find the greatest common divisor of x and y using recursion.
//Constraints:  0<=x, y<=1e6
//Input:  x=4, y=9
//Output: 1 

//Input:  x=12, y=20
//Output:  4

// int gcd(int x, int y,int copyOfX){
//     if(x<1) return 1;
//     return ((y%x==0 and copyOfX%x==0)? x: gcd(x-1, y, copyOfX));

// }
// int main (){
//     int x,y;
//     cin>>x>>y;
//     cout<<gcd(x,y,x);
//     return 0;
// }

//OR
///////// using EUCLID's ALGORITHM 
//based on pointer
//If we substract a smaller number from a larger one, (we can reduce the larger no.) but the GCD will not change

//eg.  x=20, y=12
//diff=20-12=8     
//new no. 12 and 8  will have same gcd
//again 12-8=4
//now 8 and 4 have same gcd
//again 8-4=4


//now the two numbers are eqaul and hence it is the GCD of all above two pairs...
//to calculate dii we can also use modulo operator as follows....

// int gcd(int x, int y){
//     if(y>x) return gcd(y,x);
//     if(y==0) return x;
//     return gcd(y,x%y);

// }
// int main (){
//     int x,y;
//     cin>>x>>y;
//     cout<<gcd(x,y);
//     return 0;
// }



//PROBLEM? Given a number n, print if it is an armstrong number or not...

//input 153
//Proces   1^3 + 5^3 + 3^3  =  153
//output YES


// int arm(int n){
//     if(n==0) return 0;
//     return (n%10)*(n%10)*(n%10)  + arm(n/10);
// }
// int main (){
//     int n;
//     cin>>n;
//     cout<<((arm(n)==n)? "YES":"NO");
//     return 0;
// }