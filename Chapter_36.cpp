//Selection Sort

//Repeatedly find min element in unsorted array and place it at beginning 

#include <iostream>
using namespace std;

//Finding minimum of elements and placing them at starting position

#include <vector>
int main (){
    vector <int> vec ={3,1,5,4,2};

    for(int i=0 ; i<vec.size()-1; i++){
        int min_idx=i;

        for(int j=i+1 ; j<vec.size() ; j++){
            if(vec[j]<vec[min_idx]){
                min_idx=j;
            }
        }
        if(i!=min_idx){
           swap(vec[i],vec[min_idx]);
        }
    }
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}


//Total iteration == (n)(n-1)/2  == sum of natural numbers from 1 to n-1

//Time complexity : O(n*n)
//Space Complexity: O(1)

//It is unstable Sorting algorithm.

