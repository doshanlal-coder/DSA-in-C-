#include <iostream>
#include <vector>
using namespace std;
int main (){
    int k;
    vector <int> vec= {11,2,2,3,5,6,4,5};
    cout<<"Enter Number Of Rotaion you want (k)=";
    cin>>k;
    cout<<endl;
    for(int i=1; i<=k; i++){
        vec.insert(vec.begin(),vec[vec.size()-1]);
        vec.pop_back();
    }
    cout<<"Printing the new array...\n";
    cout<<"New Array= "<<"{ ";

    for (int i=0; i<(vec.size());i++){
        cout<<vec[i]<<" , ";
    }
    cout<<" }";
}

