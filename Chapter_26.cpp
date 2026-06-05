#include <iostream>
using namespace std;

///TYPES OF POINTER

//1. Null Pointer
//2. Wild Pointer
//3. Dangling Pointer
//4. Void Pointer



int main (){
    int x=10;
    int *ptr=&x;

    cout<<*ptr * *ptr;
}