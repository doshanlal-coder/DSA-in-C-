// #include <iostream>
// using namespace std;
// int main(){
//     cout <<"hello";
// }

/////////////////WORKING ON LOOPS PATTERN//////////////

// #include <iostream>
// using namespace std;
// int main ()
// {
//     for (int i=1; i<=6 ; i++){
//         for (int j=1; j<=6 ; j++){
//             cout<<'*';
//         }

//         cout<<'*'<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main ()
// {

//     int i,j;
//     int n,m ;
//     cin>>n>>m;
//     for (int i=1; i<=n ; i++){
//         for (int j ; j<=m ; j++){
//             if (i==1 || j==1 || i==n || j==m ){
//                 cout << "*";
//             }

//             else {
//                 cout<<" ";
//             }
//         }

//     cout<<endl;
//     }


// }


// #include <iostream>
// using namespace std;
// int main ()
// {
//     int n;
//     cin>> n ;
//     for (int i=1 ; i<=n ; i++){
//         for (int j=1 ; j<=i ; j++){
//             cout << "*"; 
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main ()
// {
//     int n;
//     cin>> n ;
//     for (int i=n ; i>=1 ; i--){
//         for (int j=n ; j>=n+1-i ; j--){
//             cout << "*"; 
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main ()
// {
//     int n;
//     cin>>n;
//     for (int i=1 ; i<=n ; i++){
//         for ( int j=n ; j>=i; j--){
//             cout<<" ";
//         }
//         for ( int j=1 ; j<=2*i-1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

    
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     for (int i=1 ; i<=n ; i++){
//         for (int j=1 ; j<=i ; j++){
//             cout<< j;
//         }
//         cout<<endl;

//     }
// }



// #include <iostream>
// using namespace std;
// int main ()
// {
//     int n;
//     cin>> n;
//     for (int i=1 ; i<=n ; i++){
//         for (int j=i ; j<=n ; j++){
//             cout <<j;
//         }
//         for (int k=1 ; k<=i-1 ; k++){
//             cout<< k ;
//         }
//         cout<<endl;
//     }

// }

// #include <iostream>
// using namespace std;
// int main ()
// {
//     int n;
//     cin>>n;
//     for (int i = 1 ; i<=n ; i++){
//         for (int i =1 ; i<=n ; i++){
//             cout<< i;
//         }
//         cout << endl;
//     }

// }


// #include <iostream>
// using namespace std;
// int main ()
// {
//     int n;
//     cin>> n;
//     for (int i = 1 ; i<=n ; i++){
//         for (int j = 1 ; j<=n ; j++){
//             if ( (j+i+1) % 2 == 0 ) {
//                 cout<< 2;
//             }
//             else {
//                 cout << 1;
//             }
//         }
//         cout<< endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main ()
// {
//     int n;
//     cin>>n;
//     for (int i= 1; i<=n ; i++){
    
//         for( int j=(n-1) ; j>=i ; j--){
//             cout <<" ";
//         }
//         for (int j=1 ; j<=i ;j++){
//             cout<<j;
//         }

//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main ()
// {
//     int n;
//     cin>>n;
//     for (int i= 1; i<=n ; i++){
    
//         for( int j=n ; j>=i ; j--){
//             cout <<" ";
//         }
//         for (int j=1 ; j<=i ;j++){
//             cout<<j;
//         }
        

//         cout<<endl;
//     }
// }

/////////////////////////////////
/////////////////////////////////

// #include <iostream> 
// using namespace std;
// int main ()
// {
//     cout<< sizeof(5555); 
// }

// ////same thing using loops

// #include <iostream>
// using namespace std;
// int main ()
// {
//     int digit=0;
//     int n;
//     cout<< "ENTER THE NUMBER: "; cin>> n;
//     while (n>0 ){
//         digit++;
//         n=(n/10);
//     }
//     cout<<digit;
// }

// ////to find the sum of digit;;

// #include <iostream>
// using namespace std;
// int main ()
// {
//     int digit=0;
//     int n,i,j;
//     int sum=0;
//     cout<< "ENTER THE NUMBER: "; cin>> n; //123
//     while (n>0 ){
//         digit++;
//         i=n%10;
//         n=n/10;
//         sum=sum+i;
//     }
//     cout<<sum;
// }

// #include <iostream>
// using namespace std;
// int main ()
// {
//     int n;
//     int reverse=0;
//     cout<< "ENTER THE NUMBER: "; cin>> n; //123

//     while (n>0 ){
//         int lastdigit = n%10;
//         reverse=(reverse*10+ lastdigit);
//         n=(n/10);
//     }
//     cout<<reverse;
// }



// #include <iostream>
// using namespace std;
// int main ()
// {
//     int n;
//     cin>> n;
//     int factorial=1;
//     for(int i=1 ; i<=n ; i++){
//         factorial = factorial*i;
//     }
//     cout<<factorial;

// }

