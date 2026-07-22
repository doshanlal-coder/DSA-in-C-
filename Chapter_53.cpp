/////CIRCULAR LINKED LIST...

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     Node *next;
//     int val;
//     Node(int val)
//     {
//         this->val = val;
//         next = nullptr;
//     }
// };
// class circular_LL
// {
// public:
//     Node *head;
//     circular_LL()
//     {
//         head = nullptr;
//     }

//     void insert_at_end(Node *&head, int val)
//     {
//         Node *new_node = new Node(val);
//         if (head == nullptr)
//         {
//             head = new_node;
//             new_node->next = head;
//             return;
//         }

//         Node *tail = head;
//         while(tail->next != head){
//             tail = tail->next;
//         }
//         tail->next = new_node;
//         new_node->next = head;

//     }
//     void print(){
//         Node *temp = head;
//         do{
//             cout<<temp->val<<" -> ";
//             temp = temp->next;
//         }while(temp != head);
//     }
// };


// int main()
// {
//     circular_LL cll;
//     cll.insert_at_end(cll.head, 10);
//     cll.insert_at_end(cll.head, 20);
//     cll.insert_at_end(cll.head, 30);
//     cll.insert_at_end(cll.head, 40);
//     cll.insert_at_end(cll.head, 50);
//     cll.insert_at_end(cll.head, 60);
//     cll.insert_at_end(cll.head, 70);
//     cll.insert_at_end(cll.head, 80);
//     cll.insert_at_end(cll.head, 90);
//     cll.insert_at_end(cll.head, 100);
//     cll.insert_at_end(cll.head, 110);
//     cll.insert_at_end(cll.head, 120);
//     cll.insert_at_end(cll.head, 130);
//     cll.insert_at_end(cll.head, 140);
//     cll.insert_at_end(cll.head, 150);
//     cll.insert_at_end(cll.head, 160);
//     cll.insert_at_end(cll.head, 170);
//     cll.insert_at_end(cll.head, 180);
//     cll.insert_at_end(cll.head, 190);
//     cll.insert_at_end(cll.head, 200);

//     cll.print();
//     return 0;;
// }

