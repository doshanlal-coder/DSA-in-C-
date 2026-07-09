// Pattern: 2 POINTERS

// Problem: Given 2 linked list, tell if they are equal or not. Two linked lists are equal if they have the same data and arrangements of the data is also the same
//  #include <iostream>
//  using namespace std;
//  class Node{
//      public:
//      int val;
//      Node *next;
//      Node(int val){
//          this->val = val;
//          next = nullptr;
//      }
//  };
//  void check(Node *&head1, Node *&head2){
//      Node *temp1 = head1;
//      Node *temp2 = head2;
//      Node *temp11 = head1;
//      Node *temp22 = head2;

//     int count = 0;
//     while(temp1 != nullptr){
//         count++;
//         temp1 = temp1->next;
//     }
//     while(temp2 != nullptr){
//         count--;
//         temp2 = temp2->next;

//     }
//     if(count != 0){
//         cout<<"NOT EQUAL\n";
//         return;
//     }

//     while(temp11 != nullptr){
//         if(temp11->val == temp22->val){

//             temp11 = temp11->next;
//             temp22 = temp22->next;
//             continue;
//         }
//         else{
//             cout<<"NOT EQUAL\n";
//             return;

//         }
//     }
//     cout<<"EQUAL\n";

// }

// void insert_at_head(Node *&head, int val) // passing by reference as we have to make changes in the linked list.
// {
//     Node *new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }
// int main (){
//     Node *head1 = nullptr;
//     Node *head2 = nullptr;

//     insert_at_head(head1, 1);
//     insert_at_head(head1, 2);
//     insert_at_head(head1, 3);
//     insert_at_head(head1, 4);
//     insert_at_head(head1, 5);
//     insert_at_head(head1, 6);

//     insert_at_head(head2, 1);
//     insert_at_head(head2, 2);
//     insert_at_head(head2, 3);
//     insert_at_head(head2, 4);
//     insert_at_head(head2, 5);
//     insert_at_head(head2, 69);
//     insert_at_head(head2, 7);

//     check(head1, head2);
//     return 0;

// }

// OR

// #include <iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node *next;
//     Node(int val){
//         this->val = val;
//         next = nullptr;
//     }
// };

// void check(Node *head1, Node *head2){
//     Node *temp1 = head1;
//     Node *temp2 = head2;

//     // Traverse both lists simultaneously
//     while(temp1 != nullptr && temp2 != nullptr) {
//         // If values mismatch, they aren't equal
//         if(temp1->val != temp2->val) {
//             cout << "NOT EQUAL\n";
//             return;
//         }
//         temp1 = temp1->next;
//         temp2 = temp2->next;
//     }

//     // If both reached nullptr at the same time, they are equal.
//     // If one is nullptr and the other isn't, their lengths were different!
//     if(temp1 == nullptr && temp2 == nullptr) {
//         cout << "EQUAL\n";
//     } else {
//         cout << "NOT EQUAL\n";
//     }
// }
// void insert_at_head(Node *&head, int val) // passing by reference as we have to make changes in the linked list.
// {
//     Node *new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }

// int main (){
//     Node *head1 = nullptr;
//     Node *head2 = nullptr;

//     insert_at_head(head1, 1);
//     insert_at_head(head1, 2);
//     insert_at_head(head1, 3);
//     insert_at_head(head1, 4);
//     insert_at_head(head1, 5);
//     insert_at_head(head1, 6);

//     insert_at_head(head2, 1);
//     insert_at_head(head2, 2);
//     insert_at_head(head2, 3);
//     insert_at_head(head2, 4);
//     insert_at_head(head2, 5);
//     insert_at_head(head2, 6);
//     // insert_at_head(head2, 7);

//     check(head1, head2);
//     return 0;

// }

// Problem? Given the heads of two LL. FInd return the node at which the two list intersects.. if not return NULL;

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
//                 cout<<temp1;
//                 return;
//             }
//             temp2 = temp2->next;

//         }
//         temp1 = temp1->next;

//     }
//     cout<<"null";

// }

// ///best method is (but only works if the intersection is after the same dist from starting);
// //but we can use this by some modification
// //MODIFICATION: bring the temp pointer of bigger LL equivalent to smaller one by ((size of Big LL - that of smaller LL)) : Now shift the pointer of bigger LL the difference steps further
// void intersection2(Node *&head1,Node *&head2){
//     Node *temp1 = head1;
//     Node *temp2 = head2;

//     while(temp1 != nullptr && temp2 != nullptr){
//         if(temp1 == temp2){
//             cout<<temp1;
//             return;
//         }
//         temp1 = temp1->next;
//         temp2 = temp2->next;
//     }
//     cout<<"null";

// }
// void intersection3(Node *&head1,Node *&head2){

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
//     h23->next = h14;

//     intersection1(h11 , h21);
//     cout<<endl;
//     intersection2(h11 , h21);
//     return 0;
// }

// PROBLEM ? given two LL , both sorted. return single LL merged and sorted;

// Problem ? given an array of k- linked list, each LL is sorted in ascending order. Merge all the LL into one sorted LL and return it.

// SLOW FAST POINTER
// fast pointer 2 node se aage badhega aur slow pointer 1 node se

// Problem ? Find the middle element of the given Linked list without traversing it twice

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
// void middle(Node *&head){
//     Node *slow = head;
//     Node *fast = head;
//     while(fast->next != nullptr && fast->next->next != nullptr){
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     if(fast->next == nullptr){
//         cout<<slow->val;
//     }
//     else if(fast->next->next == nullptr){
//         cout<<slow->val;
//         cout<<" & "<<slow->next->val;
//     }
// }
// void insert_at_head(Node *&head, int val) // passing by reference as we have to make changes in the linked list.
// {
//     Node *new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }

// int main()
// {
//     Node *head = nullptr;
//     insert_at_head(head, 1);
//     insert_at_head(head, 2);
//     insert_at_head(head, 3);
//     insert_at_head(head, 4);
//     insert_at_head(head, 5);
//     insert_at_head(head, 6);
//     insert_at_head(head, 7);
//     insert_at_head(head, 8);

//     middle(head);
//     return 0;

// }

/// Problem ? Given head of a LL, determine if the LL has a cycle in it. (USING SLOW AND FAST POINTER CONCEPT)

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
// void cycle(Node *&head)
// {
//     Node *slow = head;
//     Node *fast = head;
//     while (fast->next != nullptr && fast->next->next != nullptr)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//         if (slow == fast)
//         {
//             cout << "CYCLE";
//             return;
//         }
//     }
//     cout << "NO CYCLE";
//     return;
// }
// void insert_at_head(Node *&head, int val) // passing by reference as we have to make changes in the linked list.
// {
//     Node *new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }

// int main()
// {
//     Node *head = nullptr;
//     insert_at_head(head, 1);
//     insert_at_head(head, 2);
//     insert_at_head(head, 3);
//     insert_at_head(head, 4);
//     insert_at_head(head, 5);
//     insert_at_head(head, 6);
//     insert_at_head(head, 7);
//     insert_at_head(head, 8);

//     cycle(head); //Output : No cycle


//     Node *n1 = new Node(1);
//     Node *n2 = new Node(2);
//     Node *n3 = new Node(3);
//     Node *n4 = new Node(4);
//     Node *n5 = new Node(5);
//     Node *n6 = new Node(6);

//     n1->next = n2;
//     n2->next = n3;
//     n3->next = n4;
//     n4->next = n5;
//     n5->next = n6;
//     n6->next = n3;

//     cycle(n1); //Output : Cycle


//     return 0;
// }



//Given a LL, check if it is a palindrome or not.
//Method 1> Sol, store the reverse of the elements and then check element by element;
//MEthod 2> find the middle element and reverse only the second part of the LL after thet middle element: then compare ele by ele











///REARRANGEMENT OF NODES IN A LIST.
//Problem? given  the head of a LL, rotate the list to right by k places:









//INCOMPLETE...