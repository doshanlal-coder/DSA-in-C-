//    LINKED LIST     //

// Implementation Of a Listnode in a singly linked list

/* *************************************************************************************************
remove1


#include <iostream>
using namespace std;

// Define what a single "Node" (train car) looks like
class Node
{
public:
    int val;    // This stores our actual data (the integer)
    Node *next; // This is a pointer that holds the memory address of the next node

    // The constructor: runs automatically when we create a new node
    Node(int data)
    {
        val = data;   // Set the node's value to the data we passed in
        next = nullptr;  // By default, a new node doesn't point to anything yet
    }
};

int main()
{
    // STEP 1: Create 5 independent nodes out in the permanent memory (Heap)
    // n1, n2, etc., are just pointers holding the memory addresses of these nodes
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);

    // STEP 2: Link the nodes together to form a chain (Linked List)
    n1->next = n2; // n1 now points to n2
    n2->next = n3; // n2 now points to n3
    n3->next = n4; // n3 now points to n4
    n4->next = n5; // n4 now points to n5
                   // Note: n5->next is still NULL (the end of the chain)

    // STEP 3: Create a traveler pointer named 'temp' and start it at the beginning (n1)
    Node *temp = n1;

    // STEP 4: Loop through the chain until 'temp' hits a dead end (nullptr)
    while(temp != nullptr){
        cout << temp->val;  // 1. Print the value of the node 'temp' is currently looking at
        temp = temp->next;  // 2. Move 'temp' forward to the next node's address
    }


    //We can also use such loop (But NOT RECOMMENDED)!
        // for(int i=0; i<5; i++){
    //     cout<<temp->val;
    //     temp= temp->next;
    // }


    return 0; // End the program
}


*************************************************************************************************
//remove2
// */

//*************************************************************************************************
// Traversing in a singly linked list

// in int main function

// // STEP 3: Create a traveler pointer named 'temp' and start it at the beginning (n1)
// Node *temp = n1;

// // STEP 4: Loop through the chain until 'temp' hits a dead end (nullptr)
// while(temp != nullptr){
//     cout << temp->val;  // 1. Print the value of the node 'temp' is currently looking at
//     temp = temp->next;  // 2. Move 'temp' forward to the next node's address
// }

//*************************************************************************************************

//*************************************************************** */

//(1) at starting or at tail

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int data)
//     {
//         val = data;
//         next = nullptr;
//     }
// };

// void insert_at_head(Node *&tail, int val)// passing by reference as we have to make changes in the linked list.
// {
//     Node *new_node = new Node(val);
//     new_node->next = head; //new node k agle wale value ko head k equal kr diya
//     head = new_node;// head ko ab  redifine kr rhe , ki inserted value head hai
// }

// void display(Node *head)// passing by values as we just need to display it.
// {
//     Node *temp = head;
//     while (temp != nullptr)
//     {
//         cout << temp->val << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }
// int main()
// {
//     Node *head = NULL; //created a linked list with no data
//     insert_at_head(head, 10);
//     display(head);

//     insert_at_head(head, 20);
//     display(head);

//     insert_at_head(head, 30);
//     display(head);

//     return 0;
// }

//(2) inserting at tail position

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
// void insert_at_tail(Node *&head, int val){
//     Node *new_node = new Node(val);

//     //if the list is empty
//     if(head == nullptr){
//         head = new_node;
//         return ;
//     }
//     //if it is not empty, then traversing to the end of the list
//     Node *temp = head;
//     while(temp->next != nullptr){
//         temp = temp->next;

//     }
//     temp->next  = new_node;
// }
// void display(Node *head)// passing by values as we just need to display it.
// {
//     Node *temp = head;
//     while (temp != nullptr)
//     {
//         cout << temp->val << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }
// int main()
// {
//     Node *head = NULL; //created a linked list with no data
//     insert_at_tail(head, 10);
//     display(head);

//     insert_at_tail(head, 20);
//     display(head);

//     insert_at_tail(head, 30);
//     display(head);

//     return 0;
// }

//(3) // Insertion at kth position in a singly linked list

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
// void insert_at_k(Node *&head, int val, int k){
//     Node *new_node = new Node(val);

//     if(k == 0){
//         new_node->next = head;
//         head = new_node;
//         return ;
//     }

//     int run = 0;
//     Node *temp = head;
//     while(run < k-1 && temp!= nullptr){
//         temp = temp->next;
//         run ++;
//     }
//     if(temp == nullptr){
//         cout<<"ERROR\n";
//         delete new_node;
//         return;
//     }
//     new_node->next = temp->next;
//     temp->next = new_node;

// }
// void display(Node *head)// passing by values as we just need to display it.
// {
//     Node *temp = head;
//     while (temp != nullptr)
//     {
//         cout << temp->val << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }
// int main (){
//     Node *head = new Node(0);
//     Node *n2 = new Node(1);
//     Node *n3 = new Node(2);
//     Node *n4 = new Node(3);

//     head->next = n2;
//     n2->next = n3;
//     n3->next = n4;

//     insert_at_k(head, 999, 2);
//     display(head);
//     return 0;

// }

// UPDATION AT kTH PoSITION
// traverse till k and update the new value to it.

////DELETION AT kTH PoSITION
//(1) deleting head =  then create a new pointer to point the head and shift head to second elements, at the end free the temp pointer

// free(temp);

//(2) deleting at kth position = same as above but required traversing

// PROBLEM 1> given a linked list, delete every alternate element from the list starting from second elements
// eg. list = 1 2 3 4 5 6
// after deltion = 1 3 5

#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        next = nullptr;
    }
};

void insert_at_head(Node *&head, int val)// passing by reference as we have to make changes in the linked list.
{
    Node *new_node = new Node(val);
    new_node->next = head; //new node k agle wale value ko head k equal kr diya
    head = new_node;// head ko ab  redifine kr rhe , ki inserted value head hai
}

void display(Node *head)// passing by values as we just need to display it.
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void ans(Node *&head){

    Node *temp= head->next;
    while(temp != nullptr){
        temp = temp->next->next;
        // delete ;
    }
}

int main (){
    Node *head = nullptr;
    insert_at_head(head,1);
    insert_at_head(head,2);
    insert_at_head(head,3);
    insert_at_head(head,4);
    insert_at_head(head,5);
    insert_at_head(head,6);
    insert_at_head(head,7);
    insert_at_head(head,8);

    display(head);
    ans(head);
    display(head);
    return 0;
}
