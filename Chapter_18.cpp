////  2-D  Vectors                                                 size
////Syntax              vector <vector <data_type> > vector_name (size, vector <int> (size'));


// #include <iostream>
// using namespace std;
// #include <vector>
// int main (){
//     vector <vector<int> > a(12,vector <int>(5)); /////the last bracket () show the size of 2d vector such that (size ,vector data type)
//     ///the above is 12*5 vector
// }

////the vector need not to have same size of column
////Initialising a 2D vector like above way and like below way 

// #include <iostream>
// #include <vector>
// using namespace std;
// int main (){
//     vector <vector <int>> TwoDvecName ={{1,2,3},{5,4}};
// }



//// we can also mention the column elements if we want in the 2d vector by mentioning the element wit the size in vector data type.
////Eg is given below

// #include <iostream>
// #include <vector>
// using namespace std;
// int main (){
//     vector <vector <int> > name (12, vector<int> (5, 4));
//     ////it means 12 is the number of rows, 5 is the number of columns &&&& 4 will be in the all element place.....
// }



////Pascal Triangle Problem

/// nCr= n!/[r!(n-r)!]

// #include <iostream>
// using namespace std;

// int fac(int i, int j){
//     if(i==0 && j==0 ){
//         return 1;
//     }else{
//     long long a=1;
//     long long r=1;
//     long long n_r=1;
//     long long fact=1;
//     for(int k=1; k<=i; k++){
//         a=a*k;
//     }
//     for(int k=1; k<=j; k++){
//         r=r*k;
//     }
//     for(int k=1; k<=(i-j); k++){
//         n_r=n_r*k;
//     }
//     fact=(a/(r*n_r));
//     return fact;
//     a=r=n_r=fact=1;
//     }
    
// }
// int main (){
//     int n;
//     cout<<"Enter the number of rows you want...:";
//     cin>>n;

//     for(int m=0; m<n; m++){
//         for(int z=n-m ;z>0 ; z-- ){
//             cout<<"  ";
//         }
//         for(int t=0;t<=m; t++){
//             cout<<"  "<<fac(m,t)<<"  ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     cout<<"DOne...";
// }


