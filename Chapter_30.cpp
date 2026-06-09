//PROBLEMS ON RECURSION ON STRINGS-3

#include <iostream>
using namespace std;

//PROBLEM? Remove all the occurences of 'a' from string s="abcax";

string rem(string &s, char c, int idx, int length){
    if(idx==length) return "";
    
    return ((s[idx]=='a')? "" : s[idx]) + rem(s,c,idx+1, length);
    
}
int main (){
    string s="abcax";
    int l=s.length();
    char c='a';
    int idx=0;
    cout<<rem(s,c,idx,l);
}