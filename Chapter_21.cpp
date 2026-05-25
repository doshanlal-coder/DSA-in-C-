////Advanced Problems on 2D Arrays;

////Prob. On prefix sum array;
//// Given a matrix 'a' of dimension n*m and 2 coordinates (l1,r1) and (l2,r2).Return the sum of the rectangle from (l1,r1) to (l2,r2).

// #include <iostream>
// using namespace std;
// #include <vector>

// void Sum(vector <vector <int>> &v){
//     int sum=0;

//     cout<<"Now enter the coordinates row>>column: (l1,r1) : ";
//     int l1,r1;
//     cin>>l1>>r1;

//     cout<<"Now enter the coordinates row>>column: (l2,r2) : ";
//     int l2,r2;
//     cin>>l2>>r2;

//     if(l1>l2){
//         swap(l1,l2);
//     }
//     if(r1>r2){
//         swap(r1,r2);
//     }

//     for(int i=l1-1; i<l2; i++){
//         for(int j=r1-1; j<r2; j++){
//             sum+=v[i][j];
//         }
//     }
//     cout<<"The sum of all elements inside the rectangle is: "<<sum;
// }
// int main(){
//     cout<<"Enter the order m & n: ";
//     int n,m;
//     cin>>n>>m;
//     vector <vector<int>> vec(n, vector<int> (m));
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m ; j++){
//             cin>>vec[i][j];
//         }
//     }


//     cout<<"finding the sum of rectangle...";
//     Sum(vec);


// }



///the above q can be solved by different three method ....M (2) Prefix sum.. 