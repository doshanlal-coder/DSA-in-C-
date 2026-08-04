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



//Practicing Linked List

// class Node{
//     public:
//     int val;
//     Node *next;
//     Node(int data){
//         val=data;
//         next=nullptr;
//     }
// };
// int main (){
//     Node *n1 = new Node(1);
//     Node *n2 = new Node(2);
//     Node *n3 = new Node(3);

//     n1->next= n2;
//     n2->next= n3;

//     Node *temp=n1;
//     while (temp!=nullptr){
//         cout<<temp->val;
//         temp=temp->next;
//     }
//     return 0;
    
// }

//
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int val)
//     {
//         this->val = val;
//         next = nullptr;
//     }
// };

// /////brutfoce method
// void intersection1(Node *&head1,Node *&head2){
//     Node *temp1 = head1;

//     while(temp1 != nullptr){
//         Node *temp2 = head2;

//         while (temp2 != nullptr){
//             if(temp1 == temp2){
//                 cout<<temp1->val;
//                 return;
//             }
//             temp2 = temp2->next;

//         }
//         temp1 = temp1->next;
        
//     }
//     cout<<"null";

// }

// int main()
// {
//     Node *h11 = new Node(2);
//     Node *h12 = new Node(3);
//     Node *h13 = new Node(4);
//     Node *h14 = new Node(5);
//     Node *h15 = new Node(6);
//     Node *h16 = new Node(1);

//     Node *h21 = new Node(4);
//     Node *h22 = new Node(5);
//     Node *h23 = new Node(6);

//     h11->next = h12;
//     h12->next = h13;
//     h13->next = h14;
//     h14->next = h15;
//     h15->next = h16;

//     h21->next = h22;
//     h22->next = h23;
//     h23->next = h13;


//     intersection1(h11 , h21);
//     return 0;
// }




//Binary Search

// #include <iostream>
// using namespace std;
// #include <vector>

// int binarySearch(vector<int> &input, int target)
// {
//     // define search space
//     int lo = 0;                // start of search space
//     int hi = input.size() - 1; // end of search space

//     while (lo <= hi)
//     {
//         // calc midpoint for the search space
//         int mid = (lo + hi) / 2;
//         if (input[mid] == target)
//             return mid;
//         else if (input[mid] < target)
//         {
//             // discard the left of mid
//             lo = mid + 1;
//         }
//         else
//         {
//             // discard the right of mid
//             hi = mid - 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> input(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> input[i];
//     }
//     int target;
//     cin >> target;
//     cout << binarySearch(input, target) << " ";
//     return 0;
// }




////Binary search 

#include <iostream>
#include <vector>
using namespace std;
int bs(vector<int> &input, int target){

}
