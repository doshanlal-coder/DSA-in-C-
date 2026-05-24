////Advanced Problems


////Prob. on spiral matrix;

// eg. for a square matrix 3*3
//  1 -> 2 -> 3
//            |
//  4 -> 5    6            -> 1 2 3 6 9 8 7 4 5
//  |         |
//  7 <- 8 <- 9

//eg. if not a square matrix 3*4

//  1 -> 2 -> 10 ->3
//                 |
//  4 -> 5 -> 12   6            -> 1 2 3 6 9 8 7 4 5
//  |              |
//  7 <- 8 <- 9 <- 10




// #include <iostream>
// using namespace std;
// #include <vector>


// void Result (vector <vector <int>> & v){
//     int T=0;
//     int B=v.size()-1;
//     int L=0;
//     int R=v.size()-1;
//     int Count= v.size()*v.size();
//     int C=0;

//     while(C<Count){
//         for(int i=T, j=L; j<=R && C<Count; j++){
//             cout<<"E="<<v[i][j]<<endl;
//             C++;
//         }
//         T++;

//         for(int i=T, j=R; i<=B && C<Count; i++){
//             cout<<"E="<<v[i][j]<<endl;
//             C++;

//         }
//         R--;

//         for(int i=B, j=R; j>=L&& C<Count ;j--){
//             cout<<"E="<<v[i][j]<<endl;
//             C++;
//         }
//         B--;

//         for(int i=B, j=L ; i>= T&& C<Count ;i--){
//             cout<<"E="<<v[i][j]<<endl;


//             C++;
//         }
//         L++;

//     }
    
// }
// int main (){
//     int n;
//     cout<<"Enter the number of rows and column for Square matrix :";
//     cin>>n;
//     vector <vector <int>> vec (n, vector <int > (n));
//     cout<<"Now enter the elements for the matrix : \n";
//     for(int i=0; i<n ; i++){
//         for(int j=0; j<n ; j++){
//             cin>>vec[i][j];
//         }
//     }
//     cout<<endl;

//     cout<<"Your matrix is....\n";
//         for(int i=0; i<n ; i++){
//             for(int j=0; j<n ; j++){
//                 cout<<vec[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     cout<<"The spiral elements are..... \n";
//     Result(vec);

//     return 0;
// }



////Prob. Generate a square matrix such that the elements will be from 1 to n*n in spiral order.

// #include <iostream>
// using namespace std;
// #include <vector>


// void Result (vector <vector <int>> & v){
//     int T=0;
//     int B=v.size()-1;
//     int L=0;
//     int R=v.size()-1;
//     int Count= v.size()*v.size();
//     int C=0;
//     int add=1;

//     while(C<Count){
//         for(int i=T, j=L; j<=R && C<Count; j++){
//             v[i][j]=add;
//             C++;
//             add++;
//         }
//         T++;

//         for(int i=T, j=R; i<=B && C<Count; i++){
//             v[i][j]=add;
//             C++;
//             add++;
//         }
//         R--;

//         for(int i=B, j=R; j>=L&& C<Count ;j--){
//             v[i][j]=add;
//             C++;
//             add++;
//         }
//         B--;

//         for(int i=B, j=L ; i>= T&& C<Count ;i--){
//             v[i][j]=add;
//             C++;
//             add++;
//         }
//         L++;

//     }
    
// }
// int main (){
//     int n;
//     cout<<"Enter the number of rows and column for Square matrix :";
//     cin>>n;

//     vector <vector <int>> vec (n, vector <int > (n));
//     Result(vec);


//     cout<<"Your matrix is....\n";
//         for(int i=0; i<n ; i++){
//             for(int j=0; j<n ; j++){
//                 cout<<"  "<<vec[i][j]<<"   ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
