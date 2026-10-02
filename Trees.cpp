/////////////Strivers Lecture//////

/////////////
// TREES
//  #include <bits/stdc++.h>
//  using namespace std;
//  class Node{
//      public:
//      int val;
//      Node *next;
//      Node *pre;
//      Node(int val){
//          this->val = val;
//          next = nullptr;
//          pre = nullptr;
//      }
//  };
//  int main(){
//      Node *temp = new Node(3);
//  }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// REPRESENTATION

// #include <bits/stdc++.h>
// using namespace std;
// struct Node{
//     int val;
//     struct Node *left;
//     struct Node *right;
//     Node(int val){
//         this-> val = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// int main(){
//     struct Node *root = new Node(5);

//     root->left = new Node(6);
//     root->left->left = new Node(1);
//     root->left->right = new Node(2);

//     root->right = new Node(7);
//     root->right->right = new Node(2);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// TRAVERSAL

//(1) PRE- ORDER TRAVERSAL (Root Left Right)

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        left = right = nullptr;
        this->val = val;
    }

    void preorder(Node &root){
        if(&root == nullptr){
            return ;
        }
        cout<<&root<<" ";
        // preorder(root->left);
    }
};
int main(){
    struct s;
    struct Node *root = new Node(1);

    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    s.preorder(root);

    return 0;
}