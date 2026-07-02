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

// Insertion at kth position in a singly linked list

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
void insert_at_tail(Node *&head, int val){
    Node *new_node = new Node(val);
    head = new_node;
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
int main()
{
    Node *head = NULL; //created a linked list with no data
    insert_at_tail(head, 10);
    display(head);

    insert_at_tail(head, 20);
    display(head);

    insert_at_tail(head, 30);
    display(head);

    return 0;
}
