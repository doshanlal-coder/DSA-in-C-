////STACKS

// Immplementation Using Arrays

// O(1) constant time complexity

// #include <iostream>
// using namespace std;
// class Stack
// {
//     int capacity;
//     int *arr;
//     int top;

// public:
//     Stack(int c)
//     {
//         this->capacity = c;
//         arr = new int[c];
//         this->top = -1;
//     }
//     void push(int data)
//     {
//         if (this->top == this->capacity - 1)
//         {
//             cout << "Overflow...\n";
//             return;
//         }
//         this->top++;
//         this->arr[this->top] = data;
//     }
//     int pop()
//     {
//         if (this->top == -1)
//         {
//             cout << "Underflow...\n";
//             return INT8_MIN;
//         }
//         int poppedValue = this->arr[this->top];
//         this->top--;
//         return poppedValue;
//     }
//     int getTop()
//     {
//         if (this->top == -1)
//         {
//             cout << "Underflow\n";
//             return INT8_MIN;
//         }
//         return this->arr[this->top];
//     }
//     bool isEmpty()
//     {
//         return this->top == -1;
//     }
//     bool isFull()
//     {
//         return this->top == this->capacity - 1;
//     }
//     int size()
//     {
//         return this->top + 1;
//     }
// };
// int main()
// {
//     Stack st(5);
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
//     // Capacity is full Now
//     st.push(5);

//     // trying to delete
//     st.pop();

//     cout<<st.size();

//     cout<<st.isEmpty();

//     st.pop();
//     st.pop();
//     st.pop();
//     st.pop();
//     st.pop();
//     st.pop();
//     st.pop();

//     cout<<st.size();
//     cout<<st.isFull();

//     cout<<st.isEmpty();

//     st.push(10100);
//     cout<<st.size();

//     return 0;
// }

/// PRACTICE
// #include <iostream>
// using namespace std;
// class Stack
// {
//     int capacity;
//     int *arr;
//     int top;

// public:
//     Stack(int c)
//     {
//         this->capacity = c;
//         arr = new int[c];
//         this->top = -1;
//     }
//     void push(int data)
//     {
//         if (this->top == this->capacity - 1)
//         {
//             cout << "Overflow...\n";
//             return;
//         }
//         this->top++;
//         this->arr[this->top] = data;
//     }
//     int pop()
//     {
//         if (this->top == -1)
//         {
//             cout << "Underflow...\n";
//             return INT8_MIN;
//         }
//         int poppedValue = this->arr[this->top];
//         this->top--;
//         return poppedValue;
//     }
//     int getTop()
//     {
//         if (this->top == -1)
//         {
//             cout << "Underflow\n";
//             return INT8_MIN;
//         }
//         return this->arr[this->top];
//     }
//     bool isEmpty()
//     {
//         return this->top == -1;
//     }
//     bool isFull()
//     {
//         return this->top == this->capacity - 1;
//     }
//     int size()
//     {
//         return this->top + 1;
//     }
// };
// int main()
// {
//     Stack st(5);
//     st.push(10100);
//     cout<<st.size();

//     return 0;
// }

///////////////////////////////////////////////////////////////
// Implementation of Stack using Linked List...

// Head --- top
// add element at start

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

// class Stack
// {
//     Node *head;
//     int capacity;
//     int currentSize;

// public:
//     Stack(int c)
//     {
//         this->capacity = c;
//         this->currentSize = 0;
//         head = nullptr;
//     }
//     bool isEmpty()
//     {
//         return this->head = nullptr;
//     }
//     bool isFull()
//     {
//         return this->currentSize = this->capacity;
//     }
//     void push(int data)
//     {
//         if (this->currentSize == this->capacity)
//         {
//             cout << "Overflow" << endl;
//             return;
//         }
//         Node *new_node = new Node(data);
//         new_node->next = this->head;
//         this->head = new_node;
//         this->currentSize++;
//     }
//     int pop()
//     {
//         if (this->head == nullptr)
//         {
//             cout << "Underflow\n";
//             return INT8_MIN;
//         }
//         Node *new_head = this->head->next;
//         this->head->next = nullptr;
//         Node *to_be_removed = this->head;
//         int result = to_be_removed->data;
//         delete to_be_removed;
//         this->head = new_head;
//         return result;
//     }
//     int getTop(){
//         if(this->head == nullptr){
//             cout<<"Underflow\n";
//             return INT8_MIN;
//         }
//         return this->currentSize;
//     }
// };

// int main(){
//     Stack st(3);

//     st.push(10);
//     st.push(100);
//     st.push(1000);
//     st.push(10000);
//     st.pop();
//     st.pop();
//     st.pop();
//     st.pop();
//     st.pop();
//     st.pop();
//     st.pop();

//     return 0;

// }

////////////////////////////////////////
////////////////////////////////////////
////////////////////////////////////////
////////////////////////////////////////

// STACK ??

// #include <iostream>
// #include <stack>
// using namespace std;
// int main (){
//     stack <int> stack_name;      // no need to specify the size of the stack..

//     stack_name.push(10000);
//     stack_name.push(10000);
//     stack_name.push(10000);
//     stack_name.push(10000);
//     stack_name.push(10000);
//     stack_name.push(10000);
//     stack_name.push(10000);
//     stack_name.push(10000);
//     stack_name.push(10000);
//     stack_name.push(10000);
//     stack_name.push(10000);
//     stack_name.push(10000);

//     stack_name.pop();
//     stack_name.pop();
//     stack_name.pop();
//     stack_name.pop();

//     cout<<stack_name.size()<<endl;

//     stack_name.push(20);
//     cout<<stack_name.top()<<endl;

//     stack_name.push(199);
//     cout<<stack_name.top()<<endl;

//     cout<<stack_name.empty()<<endl;

//     return 0;
// }

/// PROBLEM ?

/// COPY STACK
// Copy contents of one stack to another in same order

// #include <iostream>
// using namespace std;
// #include <stack>
// int main()
// {
//     stack<int> st1;
//     stack<int> temp;
//     stack<int> copy;

//     st1.push(1);
//     st1.push(2);
//     st1.push(3);
//     st1.push(4);

//     for (int i = 0; i < 4; i++)
//     {
//         int tem = st1.top();
//         temp.push(tem);
//         st1.pop();
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         int tem = temp.top();
//         copy.push(tem);
//         temp.pop();
//     }

//     cout << st1.empty() << endl;
//     cout << temp.empty() << endl;
//     cout << copy.empty() << endl;

//     cout << copy.top() << endl;
//     copy.pop();
//     cout << copy.top() << endl;
//     copy.pop();
//     cout << copy.top() << endl;
//     copy.pop();
//     cout << copy.top() << endl;
//     copy.pop();
//     cout << copy.top() << endl;
//     return 0;
// }



//////////////////////////////////
//PROBLEM? 
///INSERTING ELEMENT AT BOTTOM OF THE STACK


