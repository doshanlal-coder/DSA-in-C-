#include <iostream>
using namespace std;

////Problems on Time Complexity

//Problem 1 } 

// #include <iostream>
// using namespace std;
// int main (){
//     int n=10;
//     for(int i=2; i<=n ; i*=2){
//         cout<<i;
//         cout<<endl;
//     }
// }

//{for explaination, see copy}
//Ans:  O(log n) 


//Problem 2 }

// #include <iostream>
// using namespace std;
// int main(){
//     int val=0;
//     int n=10;
//     for(int i=0; i<=10; i++){
//         val++;
//     }
// }

//Number of iteration is here 3n+1== n   after removing all constants
// O(n)= O(10)


//Problem 3 }

// int main(){
//     int val=0;
//     int n=10;
//     for (int i=1; i<= n; i+=i){
//         val++;
//     }
// }

//O(log n) same logic as Prob 1


//Problem 4 } nested loop 

// int main (){
//     int val=0;   //avoid
//     int n=10;    //avoid           
//     for(int i = 1; i<=n; i*=2){      
//         for(int j=1; j<= i; j++){      // sum of a gp 1+2+4+8+.........+ 2 power k =  a(r^n  - 1)/(r-1)== 2^k = 2^log2 n= approx n  {a=1,r=2} 
//             val++;
//             cout<<"%";
//         }
//         cout<<endl;
//     }
// }

//see copy
//O( n )



//Problem 5 } 

// int main (){
//     int val=0;
//     int n=100;
//     for(int i=1; i<=n; i*=2){
//         for(int j=1; j>i; j--){
//             val++;
//         }
//     }
// }



///O(n*log n )


//Problem 6 }

// int main (){
//     int val=0;
//     int n;
//     for(int i=n; i>0 ; i/=2){
//         for(int j=0; j<i; j++){
//             val++;
//         }
//     }
// }

//O( n )

//Problem 7 }

// int main (){
//     int val=0; int n;
//     for(int i=2; i<=n ; i*=i){
//         val++;
//     }
// }

//O( log log n)