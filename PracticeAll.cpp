#include <iostream>
using namespace std;
////add all the elements of an array

// int main (){
//     int arr[5]={1,2,3,4,5};
//     int netSum=0;
//     int i=0;
//     while(i<sizeof(arr)/4){
//         netSum+=arr[i];
//         i++;
//     }
//     cout<<"Sum="<<netSum;
//     return 0;
// }


////find maximum of all elements in array

// int main (){
//     int arr[16]={111111,2,896,0,4,5,6,9,8,7,966,324,15,702,785,12};
//     int max=0;
//     cout<<"Checking for Maximum...\n";
//     for(int i=0; i<sizeof(arr)/4; i++){
//         if(max<=arr[i]){
//             max=arr[i];
//         }
//     }
//     cout<<"Max="<<max;
//     return 0;
// }


////

// int main (){
//     int arr[4]={12,4,5,8};
//     cout<<"Finding 5...\n";
//     for(int i=0; i<sizeof(arr)/4; i++){
//         if(arr[i]==5){
//             cout<<"Found\n";
//             cout<<"Position index is="<<(i-1)<<endl;
//             break;
//         }
//         else{
//             cout<<"Not found...\n";
//         }
//     }
//     return 0;
// }



////writing a vector and adding new elememts, removing some elements

// #include <vector>
// int main (){
//     vector <int> vecname={1,2,3,6,5,4};
//     vecname.push_back(3);
//     vecname.insert(vecname.begin()+2, 66);
//     vecname.pop_back();
//     vecname.erase(vecname.begin()+1);

//     for(int i=0; i<vecname.size();i++){
//         cout<<vecname[i]<<endl;
//     }
// } 





///find the last occurence of element x in a given array

// int main (){
//     int arr[]={1,2,3,4,5,6,7,8,9,7,8,9,7,9,8,9,0,5,9,9,9,56,5};
//     cout<<sizeof(arr)/4<<endl;
//     for(int i=sizeof(arr)/4-1;i>=0;i--){
//         if(arr[i]==5){
//             cout<<"position is="<<i;
//             break;
//         }
//     }
// }


///finding the number of occurence of particular element in an array

// int main (){
//     int arr[]={1,2,3,4,5,6,7,8,9,7,8,9,7,9,8,9,0,5,9,9,9,56,5};
//     int occ=0;
//     for(int i=sizeof(arr)/4-1;i>=0;i--){
//         if(arr[i]==9){
//             occ++;
//         }
//     }
//     cout<<"Total occurence="<<occ;
// }


////check if the given array   int array[]={1,2,3,4,6,7,8,10,19,456} is sorted or not

// int main (){
//     int array[]={1,2,3,4,6,7,8,10,19,456};
//     int a,b;
//     for(int i=0; i<sizeof(array)/4-1; i++){
//         if((array[i+1]<array[i])){
//             cout<<"Not Sorted";
//         }else{
//             cout<<"Sorted";
//         }
//     }
// }

