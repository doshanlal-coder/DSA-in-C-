//Strings

// #include <iostream>
// using namespace std;
// int main (){
//     cout<<int('A'); //we can print ASCII value of any character
// }

//////////Some Inbuilt functions of string

// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){

    //reverse(startIndex,endIndex)

    string str1= "DoshanLalSahu";
    reverse(str1.begin(),str1.end());
    cout<<str1<<endl;

    //substr(position, length)
    string str2= "DoshanLalSahu";
    cout<<str2.substr(0,6)<<endl; 

    //strcat()  :: to add character array
    char s1[20]="Doshan";
    char s2[20]="Lal";
    strcat(s1,s2);
    cout<<s1<<endl;




}