///////Questions on Recursion 

#include <iostream>
using namespace std;

///Given an integer, find out the sum of its digits using recursion.

int sumDig(int n){
    if(n>0 and n<10) return n ;
    int ans=n-(n/10)*10;
    return ans+ sumDig(n/10);
}
int main (){
    int n=1234;
    cout<<sumDig(n);
}