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

// #include <bits/stdc++.h>
// using namespace std;
// struct Node
// {
//     int val;
//     struct Node *left;
//     struct Node *right;
//     Node(int val)
//     {
//         left = right = nullptr;
//         this->val = val;
//     }
// };
// void preorder(Node *root)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     cout << root->val << " ";
//     preorder(root->left);
//     preorder(root->right);
// }

// int main()
// {
//     struct Node *root = new Node(1);

//     root->left = new Node(2);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     root->right = new Node(3);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     preorder(root);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(2) POST- ORDER TRAVERSAL (Left Right Root)

// #include <bits/stdc++.h>
// using namespace std;
// struct Node{
//     int val;
//     struct Node *left;
//     struct Node *right;
//     Node (int val) {
//         this->val = val;
//         left = right = nullptr;
//     }
// };
// void postorder(Node *root){
//     if(root == nullptr) return;

//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->val<<" ";

// }
// int main(){
//     struct Node *root = new Node(1);

//     root->left = new Node(2);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     root->right = new Node(3);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     postorder(root);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(3 INORDER TRAVERSAL

// #include <iostream>
// using namespace std;
// struct Node {
//     int val;
//     struct Node *left;
//     struct Node *right;
//     Node(int val){
//         this->val= val;
//         left = right = nullptr;

//     }
// };
// void inorder(Node *root){
//     if(root == nullptr) return;

//     inorder(root->left);
//     cout<<root->val<<" ";
//     inorder(root->right);
// }
// int main(){
//     struct Node *root = new Node(1);

//     root->left = new Node(2);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     root->right = new Node(3);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     inorder(root);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//() LEVEL ORDER TRAVERSAL

// #include <bits/stdc++.h>
// using namespace std;
// struct Node
// {
//     int val;
//     struct Node *left;
//     struct Node *right;
//     Node(int val)
//     {
//         this->val = val;
//         left = right = nullptr;
//     }
// };

// void levelOrder(Node *root)
// {
//     if (root == nullptr)
//         return;

//     vector<vector<int>> v;
//     queue<Node *> q;
//     q.push(root);
//     q.push(nullptr);

//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();
//         if (temp != nullptr)
//         {
//             cout << temp->val<<" ";
//             if (temp->left != nullptr)
//             {
//                 q.push(temp->left);
//                 if (temp->right != nullptr)
//                 {
//                     q.push(temp->right);
//                 }
//             }
//             else if (q.empty())
//             {
//                 q.push(nullptr);
//             }
//         }
//     }
// }
// int main()
// {
//     struct Node *root = new Node(1);

//     root->left = new Node(2);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     root->right = new Node(3);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     levelOrder(root);
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Practice

// #include <bits/stdc++.h>
// using namespace std;
// struct Node
// {
//     int val;
//     struct Node *left;
//     struct Node *right;
//     Node(int val)
//     {
//         this->val = val;
//         left = right = nullptr;
//     }
// };
// void LO(Node *root)
// {
//     if (root == nullptr)
//         return;

//     queue<Node *> q;
//     q.push(root);
//     q.push(nullptr);

//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();
//         if (temp != nullptr)
//         {
//             cout << temp->val << " ";
//             if (temp->left != nullptr)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right != nullptr)
//             {
//                 q.push(temp->right);
//             }
//         }
//         else
//         {
//             cout<<"\n";
//             if (!q.empty())
//             {
//                 q.push(nullptr);
//             }
//         }
//     }
// }
// int main()
// {
//     struct Node *root = new Node(1);

//     root->left = new Node(2);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     root->right = new Node(3);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     LO(root);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// QUESTION>> Find Maximum depth of binary tree == height of binary tree == total number of level

// #include <bits/stdc++.h>
// using namespace std;
// struct Node {
//     int val;
//     struct Node *left;
//     struct Node *right;
//     Node (int val){
//         this->val = val;
//         left = right = nullptr;
//     }
// };
// int maxHeight(Node *root){
//     if(root == nullptr) return 0;
//     return 1 + max(maxHeight(root->left), maxHeight(root->right));

// }
// int main(){
//     struct Node *root = new Node(1);

//     root->left = new Node(2);
//     root->right = new Node(3);

//     root->left->left = new Node(4);
//     root->left->left->right = new Node(5);
//     root->left->left->right->right = new Node(6);

//     cout<< maxHeight(root);
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Question > Checking whether the tree is balanced or not = left height and right height should be equal

// #include <bits/stdc++.h>
// using namespace std;
// struct Node{
//     int val;
//     struct Node *left;
//     struct Node *right;
//     Node(int val){
//         this->val = val;
//         left = right = nullptr;
//     }
// };
// int height(Node *root){
//     if(root == nullptr) return 0;

//     return 1 + max(height(root->left), height(root->right));
// }
// bool balanced(Node *root){

//     if(root == nullptr) return -1;
//     if(height(root->left) == height(root->right)) return true;
//     else return false;

// }

// int main(){
// struct Node *root = new Node(1);

// root->left = new Node(2);
// root->right = new Node(2);

// root->left->left = new Node(4);
// root->left->right = new Node(4);
// root->right->left = new Node(4);
// root->right->right = new Node(4);

//     cout<<balanced(root);

// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// DIAMETER OF A TREE == Nothing but the maximum distance bw any two nodes

// Question> Find the diameter of the given tree

// #include <bits/stdc++.h>
// using namespace std;
// struct Node {
//     int val;
//     struct Node *left;
//     struct Node *right;
//     Node(int val ){
//         this->val = val;
//         left = right = nullptr;
//     }
// };
// int findMax(Node *root, int &dia){
//     if(root == nullptr) return 0;

//     int lh = findMax(root->left, dia);
//     int rh = findMax(root->right, dia);

//     dia = max(dia, lh + rh);
//     return 1 + max(lh, rh);
// }
// int main(){
//     struct Node *root = new Node(1);

//     root->left = new Node(2);
//     root->right = new Node(2);

//     root->left->left = new Node(4);
//     root->left->right = new Node(4);
//     root->right->left = new Node(4);
//     root->right->right = new Node(4);

//     int dia = 0;
//     findMax(root, dia);
//     cout<<dia;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// struct Node
// {
//     int val;
//     struct Node *left;
//     struct Node *right;
//     Node(int val)
//     {
//         this->val = val;
//         left = right = nullptr;
//     }
// };
// int diameter(Node *root, int &dia)
// {
//     if(root == nullptr) return 0;

//     int lh = diameter(root->left , dia);
//     int rh = diameter(root->right , dia);

//     dia = max(dia, lh + rh);
//     return 1+max(lh, rh);
// }
// int main()
// {
//     struct Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);

//     root->left->left = new Node(4);
//     root->left->left->right = new Node(8);
//     root->left->right = new Node(5);
//     root->left->right->right = new Node(9);

//     root->right->left = new Node(6);
//     root->right->left->left = new Node(10);
//     root->right->right = new Node(7);
//     root->right->right->left = new Node(11);

//     int dia = 0;
//     diameter(root, dia);
//     cout<<dia+1;
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Question> find the maximum sum path:

// #include <bits/stdc++.h>
// using namespace std;
// struct Node
// {
//     int val;
//     struct Node *left;
//     struct Node *right;
//     Node(int val)
//     {
//         this->val = val;
//         left = right = nullptr;
//     }
// };
// int maxPathLength(Node *root, int &maxi){
//     if(root == nullptr) return 0;

//     int leftSum = maxPathLength(root->left, maxi);
//     int rightSum = maxPathLength(root->right, maxi);

//     maxi = max(maxi, leftSum+rightSum+ root->val);
//     return root->val + max(leftSum, rightSum);

// }

// int main()
// {
//     struct Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);

//     root->left->left = new Node(4);
//     root->left->left->right = new Node(8);
//     root->left->right = new Node(5);
//     root->left->right->right = new Node(9);

//     root->right->left = new Node(6);
//     root->right->left->left = new Node(10);
//     root->right->right = new Node(7);
//     root->right->right->left = new Node(11);
//     int maxi = 0;
//     maxPathLength(root, maxi);
//     cout<<maxi; // gives the maximum sum path
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ARRAY REPRESENTATION OF A BINARY TREE

// FOR 0- BASED INDEXING
// Arr = { root = i, left child = 2i+1, right child = 2i+2}

// FOR 1- BASED INDEXING
// Arr = { root = i, left child = 2i, right child = 2i+1}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int val)
    {
        data = val;
        left = right = nullptr;
    }
};
class Solution
{
public:
    void fun(TreeNode *root, vector<vector<int>> &v)
    {
        if (root == nullptr)
            return;
        queue<TreeNode *> q;

        q.push(root);
        q.push(nullptr);
        int i = 0, j = 0;
        while (!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();
            if (temp != nullptr)
            {
                v[i].push_back(temp->data);
            }
            else
            {
                i++;
            }
            if (temp->left != nullptr)
                q.push(temp->left);
            if (temp->right != nullptr)
                q.push(temp->right);
        }
    }
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> v;
        fun(root, v);
        return v;
    }
};

int main()
{
    struct TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(3);

    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    Solution s;
    vector<vector<int>> v = s.levelOrder(root);
    for(int i = 0; i< v.size() ; i++){
        for(int j = 0; j<v[i].size() ; j++){
            cout<<v[i][j]<<" ";
        }
    }
}
