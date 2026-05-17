////Arrays; data structure that stores a collection of homogeneous items. They have contiguous memory. Index tells about the location of item.
////Index start from zero. the 1st item get index 0. Array represented by blocks. [][][][][].
////syntax  data_type name_of_array[sizeOfArray].  eg int Array [5]={1,2,3,6,4}
////one block of int array took 4 bytes of memory
////one block of char array took 1 bytes of memory



// #include <iostream>
// using namespace std;
// int main (){
//     int Array1 [3]={1,2,3};
//     cout<<Array1[2]<<endl; ////output 3

//     int Array2 []={1,2,3,4,5,6};
//     cout<<Array2[5]<<endl; //output 6

//     for(int i=0; i<=5; i++){
//         cout<<Array2 [i];
//     }

// }




////types  (1)single dimensional or one dimensional array
////        (2)multidimensional array   (matrix)


//// traversing through array

/////by for loop;    we can define the range 

// #include <iostream>
// using namespace std;
// int main (){
//     int array1[]={1,2,3};
//     cout<<sizeof(array1)<<endl;  ////output 12 bytes
//     cout<<"Length of array="<<sizeof(array1)/4;
// }


////by for each loop;        we can't ddefine range, instead it will access all elements

// #include <iostream>
// using namespace std;
// int main (){
//     int array[]={1,2,3,4,5,6,7,8,9};
//     for(int ele  : array){
//         cout<<ele<<endl;
//     }
//     return 0;
// }



/////by using while loop

// #include <iostream>
// using namespace std;
// int main (){
//     char array[]={'A','B','C','D','E','F'};
//     cout<<sizeof(array)<<endl;
//     int i=0;
//     // while(i<sizeof(array)){
//     while(i!=(sizeof(array)-1)){
//         cout<<array[i]<<endl;
//         i++;
//     }
//     return 0;
// }


////taking input in array using loop

// #include <iostream>
// using namespace std;
// int main (){
//     int arr[5]={};
//     for(int i=0; i<5 ; i++){
//         cout<<"Enter the value for "<<i<<" : ";
//         cin>>arr[i];
//         cout<<endl;
//     }

//         for(int ele  : arr){
//         cout<<ele<<endl;
//     }

    

//     cout<<sizeof(arr);
//     return 0;

// }






/////Sorted Array = Elements of an array are in ascending order/ increasing order
//// int array[]={1,2,3,4,6,7,8,10,19,456}