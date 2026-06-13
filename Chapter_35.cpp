////Bubble Sort Algorithm

#include <iostream>
using namespace std;


//BS Algo:  Repeatedly swap two adjacent elements if they are in the wrong order

//Eg,


#include <vector>
int bubbleSort(vector <int> &vec, int i, int n){
    if(i==n-1) return vec[i];

    if(vec[i]>vec[i+1]){
        swap(vec[i],vec[i+1]);
    }
    return bubbleSort(vec, i+1, n);

}
int main (){
    vector <int> vec={4,3,2,5,6,1};
    int n=vec.size();
    bubbleSort(vec,0,n);

    for(int i=0; i<n; i++){
        cout<<vec[i]<<" ";
    }

    return 0;
}