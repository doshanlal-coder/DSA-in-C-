//POINTERS - 1

#include <iostream>
using namespace std;

//Notation;   data_type *Pointer_name;   declaration

///Retrieving addres of a variable

// int main (){
//     int x=100;
//     float y=20.42;
//     cout<<"Address = "<<&x<<endl;
//     cout<<"Address = "<<&y;

//     return 0; 
// }


//"" we can store the address using pointers...... ""

// int main (){
//     int x=10;

//     int *ptr =&x;   //Direct 
// //OR
//     int *pointer;
//     pointer = &x;        //In two steps

//     cout<<"Ad= "<<ptr<<endl;
//     cout<<"ad= "<<pointer;
// }


// int main (){
//     int y=100;
//     int *ptr=&y;

//     cout<<ptr;
//     cout<<endl;
//     cout<<&y;
// }



///we can't store one datatype address to other data type pointer



//accessing data through a pointer
//Dereference operator   (is itself *)
//using * with pointer itself will give the value stored at that pointer
//eg.
// int main (){
//     int x=100;
//     int *ptr =&x;

//     cout<<"Address= "<<ptr<<endl;
//     cout<<"Value= "<<*ptr;     //this * is called dereference operator 
//     return 0;
// }



////Performin operation using pointer

// int main (){
//     int x=100;
//     int y=24;
//     int *ptrX=&x;
//     int *ptrY=&y;

//     int result= *ptrX+ *ptrY ;
//     int *ResPtr= &result;
//     cout<<result<<endl;
//     cout<<*ResPtr;
//     return 0;
// }


