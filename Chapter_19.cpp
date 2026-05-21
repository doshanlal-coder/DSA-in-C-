////Advanced Problems on 2D arrays 

////  Prob.  Given a boolean 2D array, where each row is sorted.Find the row with maximum number of 1's

#include <iostream>
#include <vector>
using namespace std;

int check (vector <vector<int>> &v){

    for(int i=0; i<v[0].size(); i++){
        for(int j=0; j<v.size(); j++){
            if(v[j][i]==1){
                cout<<"The row "<<i+1<<" has the maximum 1...\n";
                break;
            }
            
        }
    }


}

int main (){
    int n,m;
    cout<<"Enter n (rows) & m (columns)...\n";
    cin>>n>>m;

    vector <vector <int> > vec(n, vector <int> (m));
    ////Taking input 
    cout<<"enter the elements...\n";
    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>vec[i][j];
        }
    }
    cout<<"The Matrix is"<<endl;
        for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }


    int res = check (vec);
    // cout<<"Row="<<vec.size()<<endl;
    // cout<<"Column="<<vec[0].size()<<endl;
    

}