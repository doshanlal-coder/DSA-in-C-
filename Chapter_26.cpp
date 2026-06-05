#include <iostream>
using namespace std;

///TYPES OF POINTER

//1. Null Pointer
//2. Wild Pointer
//3. Dangling Pointer
//4. Void Pointer


//(1) Wild Pointer: Only declaring the pointer , not initializing it 

// int main (){
//     int *ptr; //On;y declared not initialized
//     cout<<ptr<<"  "<<*ptr;   //it will give garbage value
//     return 0;
// }


//(2) Null Pointer: Pointer declared with NULL value to later on store the address

//Note: null pointer can't be dereferenced 
//0 signifies value of null 
//also '\0'

// int main (){
//     int *ptr =NULL;     //Just declared
//     cout<<ptr<<endl;

//     int x=10;
//     ptr=&x;    //Now initializing

//     cout<<ptr<<"  "<<*ptr;   
// }


//(3) Dangling Pointer

// int  main (){
//     int *ptr =NULL;

//     {// starting scope

//         int x=10;
//         ptr=&x;
//         cout<<ptr<<"   "<<*ptr<<endl;

//     }//ending //////// x killed after it
//     cout<<ptr<<"  "<<*ptr;      //it will print garbage if the address is alloted something different value, or 10 i.e. x if not done so..
// }



//(4) Void Pointer: a pointer that can point towards any data type value

// int main (){
//     int x=10;
//     float y=19.1920;
//     char ch='k';
//     string stg="Ram";

//     void *ptr=&x;
//     cout<<ptr<<"  "<<&x<<endl;


//     //cout<<*ptr;   // gives error 
//     //Void pointer can't be directly dereferenced, we can do so by type vcasting method

//     //ie
//     int *NewPtr =(int *)ptr;

//     cout<<*NewPtr;


// }