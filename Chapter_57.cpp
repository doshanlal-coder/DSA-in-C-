////// QUEUES //////

// Queues means First in first out = FIFO
// Or First come first serve = FCFS
// It is linear data structure

// Operation

// 1) enqueue -->to add element back side
// 2) dequeue --> to add the first came element

//----------------------------------------------------------------
// |  1 2 3 ..............                                        |
//----------------------------------------------------------------

// Types

//(1) Simple queue; elements can be add and remove only from back side of the queue

//(2) Priority queue

//(3) Circular queue : front and rear element exist one after

//(4) Double ended Queue: add and remove from both the ends

//////////////////////////////////////////////////
//////////////////////////////////////////////////

// IMPLEMENTATION
//(!)
// Using LINKED LIST

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         next = nullptr;
//     }
// };
// class Queues
// {
//     Node *head;
//     Node *tail;

// public:
// int count = 0;
//     Queues()
//     {
//         this->head = nullptr;
//         this->tail = nullptr;
//     }

//     void enqueue(int data)
//     {
//         Node *new_node = new Node(data);

//         if (head == nullptr)
//         {
//             this->head = this->tail = new_node;
//             count++;
//             return;
//         }

//         tail ->next = new_node ;
//         this->tail = new_node;
//         count ++;
//     }

//     void dequeue(int data){
//         if(head == nullptr){
//             cout<<"Underfloow\n";
//         }else{
//             Node *temp = this->head;
//             head = head->next;
//             temp->next = nullptr;

//             delete temp;
//             count --;
//         }
//     }

//     int size(){
//         return count;
//     }

//     bool isEmpty(){

//         return this->head == nullptr;
//     }
//     void print(){

//     }

// };

// int main()
// {
//     Queues q;
//     q.enqueue(102);
//     q.enqueue(1053);
//     q.enqueue(1320);
//     q.enqueue(2310);
//     q.enqueue(10456);
//     q.enqueue(100);
//     q.enqueue(190);
//     q.enqueue(1032400);
//     q.enqueue(100043);


// }




////Queues using arrays


///Using inbuilt function

#include <iostream>
#include <queue>