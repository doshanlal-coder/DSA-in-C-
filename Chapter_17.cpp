///// ##   2-D arrays

///syntax     data_type array_name [size1][size2];
///syntax     data_type array_name [row][column];



////Representation of 2 D arrays (same as matrix)
//// int array_name [2][2]={1,2,3,4} OR {{1,2},{3,4}}

////pre- Indexing is must for it....



///Prob. Write a preogram to multiply two square matrix of order 2*2


// #include <iostream>
// using namespace std;
// int main(){
//     int matrix1 [2][2];
//     int matrix2 [2][2];
//     int proMat [2][2]={};

//     cout<<"Enter the element values of Matrix 1...\n";
//     for (int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             cout<<"Enter Here : ";
//             cin>> matrix1[i][j];
//         }
//     }
//     cout<<"Enter the element values of Matrix 2...\n";
//     for (int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             cout<<"Enter Here : ";
//             cin>> matrix2[i][j];
//         }
//     }


//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             for(int k=0; k<2; k++){
//                 proMat[i][j]+=matrix1[i][k]*matrix2[k][j];
//             }
//         }
//     }
//     cout<<"The Product Of Matrix 1 & Matrix 2 is : \n";
//     for (int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             cout<<proMat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


///Prob. Write a program to find transpose of matrix;

// #include <iostream>
// using namespace std;
// int main (){
//     int mat[3][2]={1,2,3,4,5,6};
//     int Tmat[2][3]={};

//     for(int i=0; i<3; i++){
//         for(int j=0; j<2; j++){
//             Tmat[j][i]+=mat[i][j];
//         }
//     }

//     cout<<"The Transpose of given Matrix is;\n";
//     for (int i=0; i<2; i++){
//         for(int j=0; j<3; j++){
//             cout<<Tmat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
