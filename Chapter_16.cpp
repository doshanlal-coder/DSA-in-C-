//// prefix sum

///Prob.  Given an integer array 'a', return the prefix sum/ running sum in the same array without creating a new array.

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main (){
//     vector <int> a={1,3,4,5,6,2,7,8,9};
//     int pre=0;
//     for(int i=0; i<a.size(); i++){
//         pre=a[i];
//         a[i+1]+=pre;
//     }
//     cout<<"The New Array = { ";
//     for(int j=0; j<a.size(); j++){
//         cout<<a[j]<<" , ";
//     }
//     cout<<" }";
// }