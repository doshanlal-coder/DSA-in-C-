////Pattern: Target Sum
////Prob.   find the total number of pairs in the array whose some is equal to the given value x.

// #include <iostream>
// using namespace std;
// int main (){
//     int arr[]={1,2,3,4,5,6,7,8,9,8,7,6,5,4,3,2,1};
//     // cout<<sizeof(arr)/4-1;
//     int a=0;
//     for(int i=0; i<sizeof(arr)/4-1; i++){
//         for(int j=i+1; j<sizeof(arr)/4; j++){
//             if(arr[i]+arr[j]==10){
//                 a++;
//             }
//         }
//     }
//     cout<<"Total Pair="<<a;
//     return 0;
// }

////Prob.      Same but Triplet

// #include <iostream>
// using namespace std;
// int main (){
//     int arr[]={1,2,3};
//     // cout<<sizeof(arr)/4-1;
//     int a=0;
//     for(int i=0; i<sizeof(arr)/4; i++){
//         for(int j=i+1; j<sizeof(arr)/4; j++){
//             for(int k=j+1; k<sizeof(arr); k++ ){
//                 if(arr[i]+arr[j]+arr[k]==3){
//                 a++;
//             }
//             }
//         }
//     }
//     cout<<"Total Triplet="<<a;
//     return 0;
// }


///Prob.   Find the unique number in a given array where all number are repeated twice but unique number is single...

// #include <iostream>
// #include <vector>
// using namespace std;
// int main (){

//     //Method 1

//     vector <int> vec={1,2,3,4,5,6,1,2,3,4,5};
//     for(int i=0; i<vec.size(); i++){
//         for(int j=i+1; j<vec.size();j++){
//             if(vec[i]==vec[j] && vec[i]!=0){
//                 vec[i]=0;
//                 vec[j]=0;
//             }
//         }
//     }
//     for(int i=0; i<vec.size()-1; i++){
//         if(vec[i]!=0){
//             cout<<"U="<<vec[i];
//             break;
//         }
//     }


//     // Method 2

//     // int ans=0;
//     // for(int i=0; i<vec.size(); i++){
//     //     ans^= vec[i];
//     // }
//     // cout<<"Unique= "<<ans;

// }

////Prob. find the second largest number in an array

// #include <iostream>
// using namespace std;
// int main (){
//     int arr[]={1,3,7,8,2,4,5,7,8,9,4,56,4,5,46,4,6,46,4,64,5,4,64,6,456,4,6,46,556,5,45,6};
//     int sec=0, lar=0, a=0;

//     for(int i=0; i<sizeof(arr)/4; i++){
//         if(arr[i]>=sec){
//             sec=lar;
//             lar=arr[i];
//         }
//     }
//     cout<<"Second Largest="<<sec;
// }



///Prob.  Rotating the given array by k step;

// #include <iostream>
// #include <vector>
// using namespace std;
// int main (){
//     int k;
//     vector <int> vec= {11,2,2,3,5,6,4,5};
//     cout<<"Enter Number Of Rotaion you want (k)=";
//     cin>>k;
//     cout<<endl;
//     for(int i=1; i<=k; i++){
//         vec.insert(vec.begin(),vec[vec.size()-1]);
//         vec.pop_back();
//     }
//     cout<<"Printing the new array...\n";
//     cout<<"New Array= "<<"{ ";

//     for (int i=0; i<(vec.size());i++){
//         cout<<vec[i]<<" , ";
//     }
//     cout<<" }";
// }


