////Advanced Problems on 2D arrays 

////  Prob.  Given a boolean 2D array, where each row is sorted.Find the row with maximum number of 1's

// #include <iostream>
// #include <vector>
// using namespace std;

// int check (vector <vector<int>> &v){

//     for(int i=0; i<v[0].size(); i++){
//         for(int j=0; j<v.size(); j++){
//             if(v[j][i]==1){
//                 cout<<"The row "<<i+1<<" has the maximum 1...\n";
//                 break;
//             }
            
//         }
//     }


// }

// int main (){
//     int n,m;
//     cout<<"Enter n (rows) & m (columns)...\n";
//     cin>>n>>m;

//     vector <vector <int> > vec(n, vector <int> (m));
//     ////Taking input 
//     cout<<"enter the elements...\n";
//     for (int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>vec[i][j];
//         }
//     }
//     cout<<"The Matrix is"<<endl;
//         for (int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cout<<vec[i][j]<<" ";
//         }
//         cout<<endl;
//     }


//     int res = check (vec);
//     // cout<<"Row="<<vec.size()<<endl;
//     // cout<<"Column="<<vec[0].size()<<endl;
    

// }






///Prob. rotate the matrix by 90 degree

//means
// 1 2 3          7 4 1
// 4 5 6   ====>  8 5 2
// 7 8 9          9 6 3

//position change

// 11 12 13      13 23 33
// 21 22 23 ===> 12 22 32
// 31 32 33      11 21 31


// #include <iostream>
// #include <vector>
// using namespace std;
// int main (){
//     vector <vector <int> > vec={{1,2,3},{4,5,6},{7,8,9}};
//     cout<<"Given Matrix is...\n";
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<<vec[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;

//     cout<<"after rotation 90 degree...\n";

//     for(int j=0; j<3; j++){
//         for(int i=2; i>=0; i--){
//             cout<<vec[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


// ///above is ohk but if we were asked to do so by not using extra space 
// ///then first take transpose of given matrix and then reverse each row
//
/

/
//