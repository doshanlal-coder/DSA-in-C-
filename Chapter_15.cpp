////Two Pointers

///Prob. Sort an array consisting of only 0's and 1's

// #include <iostream>
// using namespace std;
// int main (){
//     int arr[]={1,0};
//     for(int i=0; i<sizeof(arr)/4; i++){
//         if(!(arr[i]==0 || arr[i]==1) ){
//             cout<<"The array is not zero and one wala\n";
//         }
//     }
// }


////Prob. in an Array above given , bring all zeroes in starting and then all one's

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int zero=0;
//     vector <int> vec={1,0,1,1,0,1,1,1,1,0,1,0,1,0,1,0,0,1,0,0,1,0,1};
//     for (int i=0; i<vec.size(); i++){
//         if(vec[i]==0){
//             zero ++;
//         }
//     }
//     for(int j=0; j<zero; j++){
//         vec.insert(vec.begin(),1);
//         vec.pop_back();
//     }
//     for(int j=0; j<vec.size()-1-zero; j++){
//         vec.insert(vec.begin(),0);
//         vec.pop_back();
//     }

//     cout<<"The New Array = { ";
//     for(int j=0; j<vec.size(); j++){
//         cout<<vec[j]<<" , ";
//     }
//     cout<<" }";
//     return 0;
// }



////Prob. bring all even elemnts in front then odd numbers

// #include <iostream>
// using namespace std;
// #include <vector>
// int main (){
//     vector <int> vec={1,2,3,4,5,6,5,7,8,9,10,7,8,9,8,95,6,6,3,5};
//     int size=vec.size();
//     for(int i=0; i<size ; i++){
//         if(vec[i]%2==0){
//             vec.push_back(vec[i]);
//         }
//     }
//     for(int i=0; i<size ; i++){
//         if(vec[i]%2==1){
//             vec.push_back(vec[i]);
//         }
//     }
//     vec.erase(vec.begin(),vec.begin()+size);

//     cout<<"The New Array = { ";
//     for(int j=0; j<vec.size(); j++){
//         cout<<vec[j]<<" , ";
//     }
//     cout<<" }";
//     return 0;
// }



//// ## TWO POINTER METHOD ## Traversing from left and right

////Prob.  given an array= {-10,-4,-3,2,5,6,7,8,9,11} in non decreasing order.
////Print a new array which have elements i.e. square of this elements and in non decreasing order...

// #include <iostream>
// #include <vector>
// #include <algorithm>   ///to use reverse inbuilt function we did so...
// using namespace std;

// void fun(vector <int> &v){
//     vector <int> vecN;
//     int size=v.size();
    
//     int left_ptr=0;
//     int right_ptr=size-1;
//     while (left_ptr< right_ptr){
//         if(abs(v[left_ptr])>abs(v[right_ptr])){
//             vecN.push_back(v[left_ptr]*v[left_ptr]);
//             left_ptr++;
//         }
//         else{
//             vecN.push_back(v[right_ptr]*v[right_ptr]);
//             right_ptr--;
//         }    
//     }
    
//     reverse(vecN.begin(),vecN.end());



//     cout<<"The New Array = { ";
//     for(int j=0; j<vecN.size(); j++){
//         cout<<vecN[j]<<" , ";
//     }
//     cout<<" }";


// }
// int main (){
//     vector <int> vec={-10,-4,-3,2,5,6,7,8,9,10,11};

//     fun(vec);

//     return 0;
// }
