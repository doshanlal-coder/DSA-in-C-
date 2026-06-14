////Bubble Sort Algorithm

#include <iostream>
using namespace std;


//BS Algo:  Repeatedly swap two adjacent elements if they are in the wrong order

//Eg,


#include <vector>
void bubbleSort(vector <int> &vec,int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){

            if(vec[j]>vec[j+1]){
                swap(vec[j],vec[j+1]);
}}}
    return ;
}
int main (){
    int n;
    cin>>n;

    vector <int> vec(n);
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    bubbleSort(vec,n);

    for(int i=0; i<n; i++){
        cout<<vec[i]<<" ";
    }

    return 0;
}