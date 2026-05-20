////Advanced Problems on 2D arrays 

////  Prob.  Given a boolean 2D array, where each row is sorted.Find the row with maximum number of 1's

#include <iostream>
#include <vector>
using namespace std;

void check(vector <int> &v){
    int left=0;
    int right=v.size()-1;
    while(left<right){
        if(v[left]>v[right]){

            right--;
        }
        else{

            left++;
        }
    }
    if(left>right){
        cout<<"Larger 1 ones are in row "<<left+1<<endl;
    }
    else if(right>left){
        cout<<"Larger 1 ones are in row "<<right-1<<endl;
    }

}
    

int main (){
    bool arr[3][4]={{0,1,1,1},{0,0,0,1},{0,0,1,1}};
    int count=0;
    vector <int> vec={};

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(arr[i][j]==1){
                count+=1;
            }
        }
        vec.push_back(count);
        count=0;
    }

    check(vec);

    
    
}