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

////TEPLATE CLASSES
//== They allows us to pass data type as parameter....

// #include <iostream>
// using namespace std;
// template <typename t>
// //OR
// // template <class t>

// class Node{
//     public:
//     t val;
//     Node *next;
//     Node (t data){
//         val = data;
//         next = nullptr;
//     }
// };
// int main (){
//     //assigning data;
//     Node <int> *node1 = new Node<int>(21); // here there is the need to specify the data type while assigning the values after Node key
//     Node <char> *node2 = new Node<char>('D');

//     cout<<node1->val<<endl;
//     cout<<node2->val;
//     return 0;
// }

// STL : STANDARD TEMPLATE LIBRARY

//=> SET OF TEMPLATE CLASSES FOR IMPLEMENTING COMMONLY USED DATA STRUCTURES AND FUNCTIONS

// STL of has 3 Major Component
//(1) Containers
//(2) Iterator
//(3) Algorithms

///////////////////////////////
/////////////////////////////////
/////////////////////////////////////

// LIST : A template class in STL for doubly linked list

// eg.

// #include <iostream>
// // Declaration
// #include <list>

// using namespace std;
// int main()
// {

//     //(1) CONTAINERS
//     list<int> list_name = {1, 2, 3, 4, 4, 5, 6};
//     // or
//     list<char> list_naam{'w', 'e', 'a'};

//     //(2) ITERATORS

//     // declaring iterators
//     list<int>::iterator itr_name = list_name.begin();
//     // or
//     auto itr_naam = list_naam.begin();

//     cout << *itr_name << "    " << *itr_naam << endl;

//     // Moving to next element
//     // Just next;
//     itr_naam++;
//     cout << *itr_naam << endl;

//     // At kth element directly
//     advance(itr_name, 3); // 3 next step ==  (4th)
//     cout << *itr_name << endl;

//     itr_name--;
//     cout << *itr_name << endl;

//     advance(itr_name, -1); // 1  step back
//     cout << *itr_name << endl;
// }

////Practice List STL

// #include <iostream>
// #include <list>
// using namespace std;
// int main (){
//     list <int> list_name = {1,2,3,4,5,6,7,8,9,10};
//     list <char> list_naaam{'a','b','e','d','f','g','s'};

//     auto itr_name = list_name.begin();
//     list <char>:: iterator itr_naaam = list_naaam.begin();

//     while(*itr_name != 10){
//         cout<<*itr_name<<" ";
//         itr_name++;
//     }
//     while(*itr_naaam != 's'){
//         cout<<*itr_naaam<<" ";
//         itr_naaam++;
//     }
//     return 0;
// }

////Reverse Iteration

// #include <iostream>
// #include <list>
// using namespace std;
// int main()
// {
//     list<int> list_name = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//     auto itr_name = list_name.rbegin();  ///rbegin() gives the first element in the reverse iteration i.e the last element
//     //and similarly rend() is there 

//     while (*itr_name != 1)
//     {
//         cout << *itr_name << " ";
//         itr_name++;
//     }
//     return 0;
// }









//////////////////////////////////////
//////////////////////////////////////
//TRAVERSING IN A LIST USING RANGE BASED LOOP



// #include <iostream>
// #include <list>
// using namespace std;
// int main (){
//     list <int> list_name = {1,2,3,4,5,6,7,8,9,10};

//     auto itr_name = list_name.begin();

//     for(auto num: list_name){
//         cout<<num<<endl;
//     }

//     return 0;
// }


//////////////////////////////////////
//////////////////////////////////////
//TRAVERSING IN A LIST USING ITERATOR BASED LOOP

// #include <iostream>
// using namespace std;
// #include <list>
// int main (){
//     list <int> num = {1,2,3,4,5,6,7,8,8,8,6,5,4,3,3,32,32,32,23,3,4,4,54,3,6,6,65,6,6};
//     for(auto itr = num.begin() ; itr != num.end() ; itr++){
//         cout<<*itr<<" ";
//     }
//     return 0;
// }


///////////////////////////////////////
///////////////////////////////////////
///INSERTING ELEMENT

/*

list_name.insert(itr, 10);     //means just bfore the itr position one element will be added i.e. 10 

*/



///////////////////////////////////////
///////////////////////////////////////
///DELETING ELEMENT

/*

list_name.erase(itr);  // tp delete element pointed by itr
list_name.erase(start_itr, end_iterator)   ///to delete range from start_iterator to the element before end_iterator     

*/



//////////////////////////////////////
//////////////////////////////////////
//sOME OTHER FUNCTION

/*
push_front(val);
pop_front();
push_back(val);
pop_back();
*/