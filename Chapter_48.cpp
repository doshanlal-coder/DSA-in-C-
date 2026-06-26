// Strings

// #include <iostream>
// using namespace std;
// int main (){
//     cout<<int('A'); //we can print ASCII value of any character
// }

//////////Some Inbuilt functions of string

// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

// #########################

/*REMOVE THIS And


int main (){

    //reverse(startIndex,endIndex)

    string str1= "DoshanLalSahu";
    reverse(str1.begin(),str1.end());
    cout<<str1<<endl;

    // //substr(position, length)
    string str2= "DoshanLalSahu";
    cout<<str2.substr(0,6)<<endl;

    //strcat()  :: to append s2 in s1 character array
    char s1[20]="Doshan";
    char s2[20]="Lals";
    strcat(s1,s2);
    cout<<s1<<endl;

    //inserting any character in string
    string str3="DOshan";
    char L='L';
    str3.push_back(L);
    cout<<str3<<endl;

    //size of string
    cout<<str3.size()<<endl;
    //or
    cout<<str3.length()<<endl;

    //to_string
    //to convert numeric value in string
    int num1=1000;
    int num2=4;
    cout<<(to_string(num1)+to_string(num2))<<endl;
}


REMOVE THIS @nd*/

// ###########################################
// PROBLEMS
// ###########################################

// Problem 1? given a string str, sort thr given string
// constraints: the string will contain only characters from a-z.

// int main (){
//     string str;
//     getline(cin, str);

//     //using count sorting algorithm
//     //ASCII value for a=97,b=98, ...... ,  and so on.
//     string Nstr="";

//     int arr[123]={};
//     for(int i=0; i<str.length();i++){
//         arr[int(str[i])]++;
//     }
//     for(int i=97; i<123; i++){
//         if(arr[i]!=0){
//             for(int j=0; j<arr[i]; j++){
//                 char ch=i; /////converting integer into character
//                 Nstr+=ch;
//             }
//         }
//     }
//     cout<<Nstr<<endl;
//     ///////////simple function to sort
//     string sttr="doshan";
//     sort(sttr.begin(), sttr.end());
//     cout<<sttr;
// }

// Problem? Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// constraint: strings s and t have characters from a-z;

// input: s= "anagram"  t= "nagaram"
// output: YES

// input: s= "bank"  t= "atm"
// output: NO

// int main (){
//     string s,t;
//     getline(cin,s);
//     getline(cin,t);
//     if (s.length() != t.length()) {
//         cout << "NO";
//         return 0;
//     }
//     sort(s.begin(),s.end());
//     sort(t.begin(),t.end());
//     if(s!=t){
//         cout<<"NO";
//         return 0;
//     }else{
//         cout<<"YES";
//     }
// }
// O(N logN)

// optimizing this approch

// int main (){
//     string s,t;
// getline(cin,s);
// getline(cin,t);
//     if (s.length() != t.length()) {
//         cout << "NO";
//         return 0;
//     }
//     int arr[26]={};
//     for(int i=0; i<s.length();i++){
//         arr[s[i]-'a']++;
//         arr[t[i]-'a']--;
//     }
//     for(int i=0; i<26; i++){
//         if(arr[i]!=0){
//             cout<<"NO";
//             return 0;
//         }
//     }
//     cout<<"YES";
//     return 0;

// }

// O(N)

// Problem? given twon stirngs s and t, determine if they are isomorphic

// Input: s="egg" t="add"
// Output: YES

// bool check(string s, string t){
//     int arrS[1000]={};
//     int arrT[1000]={};

//     if(s.length()!=t.length()){
//         return false;
//     }

//     for(int i=0; i<s.length(); i++){
//         if(arrS[s[i]]!=arrT[t[i]]){
//             return false;
//         }
//         arrS[s[i]]=i+1;
//         arrT[t[i]]=i+1;
//     }
//     return true;

// }
// int main(){
//     string s,t;
//     getline(cin,s);
//     getline(cin,t);
//     if(check(s,t)){
//         cout<<"YES";
//     }else{
//         cout<<"NO";
//     }
//     return 0;

// }

// Problem / Given an array of strings. Write a program to find the longest common prefix string amongst an array of strings.

// Input: arr=["flower","flight","flask"]
// Output: "fl"

// int main()
// {
//     string arr[3] = {"flower", "flight", "flask"};
//     // cout<<arr[0][0];
//     string one = arr[0];

//     for (int i = 0; i < one.length(); i++)
//     {

//         for (int j = 1; j < 3; j++)//instead of 3 do write n i.e. size of array.
//         {
//             if(arr[j][i]==one[i]){
//                 continue;
//             }else{
//                 return 0;
//             }
//         }
//         cout<<one[i];
//     }
// }


