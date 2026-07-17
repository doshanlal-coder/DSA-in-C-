// DOUBLY LINKED LIST

/// BAsic syntax and implementaion of doubly linked list

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *pre;
//     Node(int val)
//     {
//         this->val = val;
//         next = nullptr;
//         pre = nullptr;
//     }
// };

// class doublyLL{
//     public:
//     Node *head;
//     Node *tail;
//     doublyLL(){
//         head = nullptr;
//         tail = nullptr;
//     }

// };
// int main (){
//     Node *new_node = new Node(4);

//     doublyLL dll ;
//     dll.head = new_node;
//     dll.tail = new_node;

//     cout<<dll.head -> val<<endl;
//     cout<<dll.tail -> val<<endl;
// }













////Inserting elements

// Inserting elements at start

#include <iostream>  // Includes the standard Input/Output stream library for using cout
using namespace std; // Allows us to use standard library names (like cout, endl) without typing 'std::'

// Definition of a single blueprint (Node) for our list
class Node
{
public:
    int val;    // Stores the actual integer data/value of the node
    Node *next; // A pointer that holds the memory address of the next node in the list
    Node *pre;  // A pointer that holds the memory address of the previous node in the list

    // Constructor function: Initializes a new node when 'new Node(val)' is called
    Node(int val)
    {
        this->val = val; // Assigns the passed integer value to the node's internal 'val' variable
        next = nullptr;  // By default, a new node doesn't point forward to anything yet (set to Null)
        pre = nullptr;   // By default, a new node doesn't point backward to anything yet (set to Null)
    }
};

// Definition of the Doubly Linked List manager class
class doublyLL
{
public:
    Node *head; // A pointer pointing to the very first node of the list
    Node *tail; // A pointer pointing to the very last node of the list

    // Constructor function: Initializes an empty list when 'doublyLL dll;' is created
    doublyLL()
    {
        head = nullptr; // Since the list starts out empty, head points to nothing
        tail = nullptr; // Since the list starts out empty, tail points to nothing
    }

    // Function to append a new element to the tail end of the list
    void insert_at_end(int val)
    {
        Node *new_node = new Node(val); // Dynamically allocates memory for a brand new node with the value

        // Case 1: Checking if the list is completely empty
        if (head == nullptr)
        {
            head = new_node; // Because it is the only node, it becomes the head
            tail = new_node; // Because it is the only node, it also becomes the tail
            return;          // Exit the function early since setup is done
        }

        // Case 2: The list already contains one or more elements
        tail->next = new_node;  // Link the current last node's forward pointer to our new node
        new_node->pre = tail;   // Link our new node's backward pointer to the current last node
        tail = new_node;        // Update the manager's tail pointer so this new node is officially the last node
        return;                 // Gracefully exit the function
    }
};

// A global utility function to traverse and print the list from front to back
void print1(Node *head)
{
    Node *temp = head; // Create a temporary worker pointer starting at the head node
    
    // Loop through the list as long as the worker pointer hasn't run past the last node
    while (temp != nullptr)
    {
        cout << temp->val << " "; // Print the data value of the node currently being looked at
        temp = temp->next;        // Move the worker pointer forward to the next node using the 'next' address
    }
    cout << endl; // Print a clean newline character at the end of the full sequence
}

// A global utility function to traverse and print the list in reverse from back to front
void print2(Node *tail)
{
    Node *temp = tail; // Create a temporary worker pointer starting at the tail node
    
    // Loop through the list as long as the worker pointer hasn't run past the first node
    while (temp != nullptr)
    {
        cout << temp->val << " "; // Print the data value of the node currently being looked at
        temp = temp->pre;         // Move the worker pointer backward to the previous node using the 'pre' address
    }
    cout << endl; // Print a clean newline character at the end of the reverse sequence
}

// Execution starting point of the C++ program
int main()
{
    doublyLL dll; // Creates an instance of our list class manager named 'dll' (sets head/tail to nullptr)
    
    // Inserting 5 numbers sequentially to the end of our list instance
    dll.insert_at_end(12); // List becomes: 12
    dll.insert_at_end(13); // List becomes: 12 <-> 13
    dll.insert_at_end(14); // List becomes: 12 <-> 13 <-> 14
    dll.insert_at_end(15); // List becomes: 12 <-> 13 <-> 14 <-> 15
    dll.insert_at_end(16); // List becomes: 12 <-> 13 <-> 14 <-> 15 <-> 16

    print1(dll.head); // Calls forward printing function by feeding it the list's front head pointer
    print2(dll.tail); // Calls backward printing function by feeding it the list's rear tail pointer
    
    return 0; // Signals to the Operating System that the program executed and closed successfully
}