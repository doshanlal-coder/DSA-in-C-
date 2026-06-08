////Problems on recursion on ARRAY

#include <iostream>
using namespace std;

////recursiom on ARRAYS;

// fun(arr , idx)


//PRoblem/  given an array, print all the elements of the array recursively 

// void print(int *arr, int idx, int length){
//     //base case
//     if(idx==length) return ;
//     //self work
//     cout<<arr[idx]<<endl;
//     //assusmption
//     print(arr, idx+1, length);


// }
// int main (){
//     int arr[]= {1,2,3,4,5,6};
//     int length= sizeof(arr)/4;
//     int *ptr=&arr[0];
//     int idx=0;
//     print (ptr,idx,length);

// }


//OORR
// void print(int *arr, int idx, int length){
//     //base case
//     if(idx==length) return ;
//     //self work
//     cout<<arr[idx]<<endl;
//     //assusmption
//     print(arr, idx+1, length);


// }
// int main (){
//     int arr[]= {1,2,3,4,5,6};
//     int length= sizeof(arr)/4;
//     int idx=0;
//     print (arr,idx,length);

// }


///Problem//  Print the maximum value of array {3,10,3,2,5};
// int fun(int *arr, int idx, int length){
//     if(idx==length-1) return arr[idx] ;

//     return max(arr[idx],fun(arr,idx+1,length));

// }
// int main (){
//     int arr[]={3,10,3,2,5};
//     int length = sizeof(arr)/4;
//     int idx=0;
//     cout<<"Max:"<<fun(arr,idx,length);
//     return 0;
// }