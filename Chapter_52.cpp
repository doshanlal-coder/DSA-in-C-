//DOUBLY LINKED LIST



#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next; 
    Node *pre;
    Node(int val)
    {
        this->val = val;
        next = nullptr;
        pre = nullptr;
    }
};
