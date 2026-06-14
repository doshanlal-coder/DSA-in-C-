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

//Maximum number of swaps in worst case in Bubble Sort

//in case when all elements are in decreasing order

//eg.  5 4 3 2 1      ----  4 swaps to take 5 at end        (n-1)   
//     4 3 2 1 5      ----  3 swaps to take 4 at 2nd end    (n-2)
//     3 2 1 4 5      ----  2 swaps to take 4 at 3rd end    ...... and so on up to
//     2 1 3 4 5      ----  1 swaps to take 4 at 4th end    ............  1 
//     1 2 3 4 5            No further swaps
// Total Maximum Number of Swap ==  1+2+3+4.........+(n-1)== (n-1)(n)/2             using n(n+1)/2



//********************************************/


//Time Complexity 

// O(n*n)== Worst case time complexity

//*******************************************/

//Space Complexity

//Since we are not using any extra space , only the input vector
//Therefor O(1)

//********************************************/