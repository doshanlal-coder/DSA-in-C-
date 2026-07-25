////STACKS

// Immplementation Using Arrays

//O(1) constant time complexity

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




///PRACTICE 
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
//Implementation of Stack using Linked List...