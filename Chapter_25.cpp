///POINTER- 2

#include <iostream>
using namespace std;


//Call by value

// void swap(int x, int y){    //passing by value
//     int temp =x;
//     x=y;
//     y=temp;
// }
// int main (){
//     int x=10;
//     int y=20;

//     swap(x,y);
//     cout<<x<<" "<<y;         ///Not worked 
// }


///call by reference using pointer.


// void swap(int *x, int *y){    //passing by reference
//     int temp =*x;
//     *x=*y;
//     *y=temp;
// }

// int main (){
//     int x=10;
//     int y=20;
//     int *p1=&x;
//     int *p2=&y;
//     swap(p1, p2);
//     cout<<x<<" "<<y;         ///Now worked 

// }


/// Use 2;  using two pointer method to find first and last occurence of a character in a given string.

// void FirstAndLast(string a, int *pF, int *pL, char ch){
//     //finding first occurence
//     for(int i=0; i<=sizeof(a); i++){
//         if(ch==a[i]){
//             *pF=i;
//             break;
//         }
//     }
//     for(int i=a.length()-1; i>=0; i--){
//         if(ch==a[i]){
//             *pL=i;
//             break;
//         }
//     }
// }
// int main (){
//     string a= "bbaaa";
//     int first=-1;
//     int last=-1;
//     char ch='a';
//     int *pF=&first;
//     int *pL=&last;
//     FirstAndLast(a,pF,pL,ch);
//     cout<<"First: "<<*pF<<endl;
//     cout<<"Last: "<<*pL<<endl;
//     return 0;

// }




////Pointer Arithmetic;

//Increment and decrement;
// int main (){
//     int x=10;
//     int *ptr=&x;
//     cout<<*ptr<<endl;   //same address

//     ptr++;
//     cout<<*ptr<<endl;  //subsequent next address

//     ptr--;
//     cout<<*ptr<<endl;   // just previous address value

//     return 0;
// }


// int main (){
//     int x=10;
//     int *ptr=&x;
//     cout<<ptr<<endl;   //same address

//     ptr+1;
//     cout<<ptr<<endl;  //subsequent next address

//     ptr-1;
//     cout<<ptr<<endl;   // just previous address value

//     return 0;
// }




//accesing elements of an array using arithmetic operation;

// int main (){
//     int arr[3]={1,2,3};
//     int *ptr=&arr[0];
//     for(int i=0; i<=sizeof(arr)/4-1;i++){
//         cout<<*ptr<<endl;
//         ptr+=1;
//     }
// }





//some special operation


//  *ptr++     : first dereferencing then increasing value by 1
//  (*ptr)++   : first dereferencing then increasing value by 1
//  * ++ptr    : first move pointer by fout byte (for int) then dereferencing
//  ++ *ptr    : first dereferencing then increment the actual value store there



////arrays as pointer


//name sof an array is the address or the pointer of its zeroth index elements;

// int main (){
//     int arr[5]={1,2,3,4,5};
//     cout<<arr<<endl;
//     cout<<*arr<<endl;

//     int *ptr=&arr[0];
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
// }