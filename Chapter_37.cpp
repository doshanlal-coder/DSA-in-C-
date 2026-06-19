//Insertion Sort Algorithm 

#include <iostream>
using namespace std;

//repetedly take elements from unsorted subarray and insert in sorted subarray

#include <vector>
void fun(vector <int> &vec){
    int n=vec.size();
    for (int i=1; i<n ; i++){
        int current_ele=vec[i];

        int j=i-1;
        while(j>=0 && vec[j]>current_ele){
            vec[j+1]=vec[j];
            j--;
        }
        vec[j+1]=current_ele;
    }
    return ;
}
int main (){
    int n;
    cin>>n;
    vector <int> vec(n);
    for(int i=0; i<n ; i++){
        cin>>vec[i];
    }
    fun(vec);
        for(int i=0; i<n ; i++){
        cout<<vec[i]<<" ";
    }

    return 0;

}