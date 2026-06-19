//Questions on sorting algorithms 

#include <iostream>
using namespace std;


//Problem 1// Given an integer array arr, move all 0's to the end of it while maintaining the relative order of the non-zero elements
//Do not create any copy of the array.

//Input:  0 5 0 3 42
//Output: 5 3 42 0 0

//Solution:
#include <vector>
int main (){
    vector <int> vec ={0,0,5,0,3,42};
    int n= vec.size();

    

    for(int i=0; i<n; i++){
        if(vec[i]==0){
        vec.push_back(0);
        vec.erase(vec.begin()+i);
        }
    }
    for(int i=0 ; i<n ;i++){
        cout<<vec[i]<<" ";
    }

}