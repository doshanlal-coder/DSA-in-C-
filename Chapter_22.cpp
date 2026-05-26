////Space & Time complexity 



///Time complexity 




// #include <iostream>
// using namespace std;
// int main (){
//     int sum=0;
//     int n=100;
//     for(int i=1; i<=n; i++){
//         sum+=i;

//     }
//     cout<<sum;
// }



///find the time complexity

//eg.1
// #include <iostream>
// using namespace std;
// int main (){
//     cout<<"hello";
//     return 0;
// }

//the above code has constant instruction so the complexity is
//= Worst case time complexity i.e.   O(1)



//eg.2 Traversing an array

// #include <iostream>
// using namespace std;
// int main (){
//     int arr[] ={1,2,3,4,5,6,7,8,9};
//     for(int i=0; i<9; i++){
//         cout<<arr[i]<<endl;
//     }
// }

//// one operation for i++ , one for checking condition , one for printing the element = 3*n
////one operation to return 0 = 1
///total= 3n+1
///but in Asymptotic Annalysis we neglect the constants and the only ans. will be n ie size of array

//// in worst case : O(9)


///eg. 3 Travesing two arrays with elements n and m resp and printing their sums as sum1 and sum2.

// #include <iostream>
// using namespace std;
// int main (){
//     int arr1[]={1,2,3,4,5,6,7,8,9};
//     int arr2[]={1,2,3,4};
//     int sum1=0;
//     int sum2=0;
//     int n=9;
//     int m=4;
//     for(int i=0; i<n; i++){
//         sum1+=arr1[i];         //3n  operation
//     }
//     for(int i=0; i<m; i++){
//         sum1+=arr2[i];         //3m operation
//     }

//     cout<<sum1<<" "<<sum2;       //1 operation
                             
//     return 0;                    //1 operation

// }

//totAL 3n+3m+2 ~ n+m
//O(n+m)= O(9+4)= O(13)



//eg. 4 in nested loops

// #include <iostream>
// using namespace std;
// int main (){
//     int n=10;
//     for(int i=0; i<=n; i++){   
//         for(int j=0; j<=n; j++){
//             cout<<"*";           //performing n*n instructions
//         }
//         cout<<endl;
//     }
// }

//O(n*n)== O(100)



//eg. 5 in nested loops


// #include <iostream>
// using namespace std;
// int main (){
//     int n=10;
//     for(int i=0; i<n; i++){    //running up to n-1
//         for(int j=0; j<i; j++){ 
//             cout<<"*";           
//         cout<<endl;
//     }
// }
// }


// when
// i=0  no operation
//i=1  1 operation
//i=2  2 oper
//i=3  3 oper
//i=4  4 oper
//.
//.
//.
// i=10 10 oper
//i=n-1  n-1 operation

////  total operation = n(n-1)/2 = n*n/2  - n/2 =~ n*n/2 =~  n*n 

//O(n*n)= O(100)


////eg. 6

// #include <iostream>
// #include <bits/stdc++.h>  //this header file include many more other header file like sqrt= for square root
// using namespace std;
// int main (){
//     int n=10; 
//     for(int i=0; i<n; i++){
//         for(int j=0; j<sqrt(n); j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// here total operation  n * (square root of n) = n*sqrt(n) operation
// O(n*sqrt(n))

