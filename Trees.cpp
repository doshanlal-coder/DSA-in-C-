/////////////Strivers Lecture//////

/////////////
// TREES
//  #include <bits/stdc++.h>
//  using namespace std;
//  class TreeNode{
//      public:
//      int val;
//      TreeNode *next;
//      TreeNode *pre;
//      TreeNode(int val){
//          this->val = val;
//          next = nullptr;
//          pre = nullptr;
//      }
//  };
//  int main(){
//      TreeNode *temp = new TreeNode(3);
//  }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// REPRESENTATION

// #include <bits/stdc++.h>
// using namespace std;
// struct TreeNode{
//     int val;
//     struct TreeNode *left;
//     struct TreeNode *right;
//     TreeNode(int val){
//         this-> val = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// int main(){
//     struct TreeNode *root = new TreeNode(5);

//     root->left = new TreeNode(6);
//     root->left->left = new TreeNode(1);
//     root->left->right = new TreeNode(2);

//     root->right = new TreeNode(7);
//     root->right->right = new TreeNode(2);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// TRAVERSAL

//(1) PRE- ORDER TRAVERSAL (Root Left Right)

// #include <bits/stdc++.h>
// using namespace std;
// struct TreeNode
// {
//     int val;
//     struct TreeNode *left;
//     struct TreeNode *right;
//     TreeNode(int val)
//     {
//         left = right = nullptr;
//         this->val = val;
//     }
// };
// void preorder(TreeNode *root)
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
//     struct TreeNode *root = new TreeNode(1);

//     root->left = new TreeNode(2);
//     root->left->left = new TreeNode(4);
//     root->left->right = new TreeNode(5);

//     root->right = new TreeNode(3);
//     root->right->left = new TreeNode(6);
//     root->right->right = new TreeNode(7);

//     preorder(root);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(2) POST- ORDER TRAVERSAL (Left Right Root)

// #include <bits/stdc++.h>
// using namespace std;
// struct TreeNode{
//     int val;
//     struct TreeNode *left;
//     struct TreeNode *right;
//     TreeNode (int val) {
//         this->val = val;
//         left = right = nullptr;
//     }
// };
// void postorder(TreeNode *root){
//     if(root == nullptr) return;

//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->val<<" ";

// }
// int main(){
//     struct TreeNode *root = new TreeNode(1);

//     root->left = new TreeNode(2);
//     root->left->left = new TreeNode(4);
//     root->left->right = new TreeNode(5);

//     root->right = new TreeNode(3);
//     root->right->left = new TreeNode(6);
//     root->right->right = new TreeNode(7);

//     postorder(root);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(3 INORDER TRAVERSAL

// #include <iostream>
// using namespace std;
// struct TreeNode {
//     int val;
//     struct TreeNode *left;
//     struct TreeNode *right;
//     TreeNode(int val){
//         this->val= val;
//         left = right = nullptr;

//     }
// };
// void inorder(TreeNode *root){
//     if(root == nullptr) return;

//     inorder(root->left);
//     cout<<root->val<<" ";
//     inorder(root->right);
// }
// int main(){
//     struct TreeNode *root = new TreeNode(1);

//     root->left = new TreeNode(2);
//     root->left->left = new TreeNode(4);
//     root->left->right = new TreeNode(5);

//     root->right = new TreeNode(3);
//     root->right->left = new TreeNode(6);
//     root->right->right = new TreeNode(7);

//     inorder(root);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//() LEVEL ORDER TRAVERSAL

// #include <bits/stdc++.h>
// using namespace std;
// struct TreeNode
// {
//     int val;
//     struct TreeNode *left;
//     struct TreeNode *right;
//     TreeNode(int val)
//     {
//         this->val = val;
//         left = right = nullptr;
//     }
// };

// void levelOrder(TreeNode *root)
// {
//     if (root == nullptr)
//         return;

//     vector<vector<int>> v;
//     queue<TreeNode *> q;
//     q.push(root);
//     q.push(nullptr);

//     while (!q.empty())
//     {
//         TreeNode *temp = q.front();
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
//     struct TreeNode *root = new TreeNode(1);

//     root->left = new TreeNode(2);
//     root->left->left = new TreeNode(4);
//     root->left->right = new TreeNode(5);

//     root->right = new TreeNode(3);
//     root->right->left = new TreeNode(6);
//     root->right->right = new TreeNode(7);

//     levelOrder(root);
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Practice

// #include <bits/stdc++.h>
// using namespace std;
// struct TreeNode
// {
//     int val;
//     struct TreeNode *left;
//     struct TreeNode *right;
//     TreeNode(int val)
//     {
//         this->val = val;
//         left = right = nullptr;
//     }
// };
// void LO(TreeNode *root)
// {
//     if (root == nullptr)
//         return;

//     queue<TreeNode *> q;
//     q.push(root);
//     q.push(nullptr);

//     while (!q.empty())
//     {
//         TreeNode *temp = q.front();
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
//     struct TreeNode *root = new TreeNode(1);

//     root->left = new TreeNode(2);
//     root->left->left = new TreeNode(4);
//     root->left->right = new TreeNode(5);

//     root->right = new TreeNode(3);
//     root->right->left = new TreeNode(6);
//     root->right->right = new TreeNode(7);

//     LO(root);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// QUESTION>> Find Maximum depth of binary tree == height of binary tree == total number of level

// #include <bits/stdc++.h>
// using namespace std;
// struct TreeNode {
//     int val;
//     struct TreeNode *left;
//     struct TreeNode *right;
//     TreeNode (int val){
//         this->val = val;
//         left = right = nullptr;
//     }
// };
// int maxHeight(TreeNode *root){
//     if(root == nullptr) return 0;
//     return 1 + max(maxHeight(root->left), maxHeight(root->right));

// }
// int main(){
//     struct TreeNode *root = new TreeNode(1);

//     root->left = new TreeNode(2);
//     root->right = new TreeNode(3);

//     root->left->left = new TreeNode(4);
//     root->left->left->right = new TreeNode(5);
//     root->left->left->right->right = new TreeNode(6);

//     cout<< maxHeight(root);
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Question > Checking whether the tree is balanced or not = left height and right height should be equal

// #include <bits/stdc++.h>
// using namespace std;
// struct TreeNode{
//     int val;
//     struct TreeNode *left;
//     struct TreeNode *right;
//     TreeNode(int val){
//         this->val = val;
//         left = right = nullptr;
//     }
// };
// int height(TreeNode *root){
//     if(root == nullptr) return 0;

//     return 1 + max(height(root->left), height(root->right));
// }
// bool balanced(TreeNode *root){

//     if(root == nullptr) return -1;
//     if(height(root->left) == height(root->right)) return true;
//     else return false;

// }

// int main(){
// struct TreeNode *root = new TreeNode(1);

// root->left = new TreeNode(2);
// root->right = new TreeNode(2);

// root->left->left = new TreeNode(4);
// root->left->right = new TreeNode(4);
// root->right->left = new TreeNode(4);
// root->right->right = new TreeNode(4);

//     cout<<balanced(root);

// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// DIAMETER OF A TREE == Nothing but the maximum distance bw any two nodes

// Question> Find the diameter of the given tree

// #include <bits/stdc++.h>
// using namespace std;
// struct TreeNode {
//     int val;
//     struct TreeNode *left;
//     struct TreeNode *right;
//     TreeNode(int val ){
//         this->val = val;
//         left = right = nullptr;
//     }
// };
// int findMax(TreeNode *root, int &dia){
//     if(root == nullptr) return 0;

//     int lh = findMax(root->left, dia);
//     int rh = findMax(root->right, dia);

//     dia = max(dia, lh + rh);
//     return 1 + max(lh, rh);
// }
// int main(){
//     struct TreeNode *root = new TreeNode(1);

//     root->left = new TreeNode(2);
//     root->right = new TreeNode(2);

//     root->left->left = new TreeNode(4);
//     root->left->right = new TreeNode(4);
//     root->right->left = new TreeNode(4);
//     root->right->right = new TreeNode(4);

//     int dia = 0;
//     findMax(root, dia);
//     cout<<dia;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// struct TreeNode
// {
//     int val;
//     struct TreeNode *left;
//     struct TreeNode *right;
//     TreeNode(int val)
//     {
//         this->val = val;
//         left = right = nullptr;
//     }
// };
// int diameter(TreeNode *root, int &dia)
// {
//     if(root == nullptr) return 0;

//     int lh = diameter(root->left , dia);
//     int rh = diameter(root->right , dia);

//     dia = max(dia, lh + rh);
//     return 1+max(lh, rh);
// }
// int main()
// {
//     struct TreeNode *root = new TreeNode(1);
//     root->left = new TreeNode(2);
//     root->right = new TreeNode(3);

//     root->left->left = new TreeNode(4);
//     root->left->left->right = new TreeNode(8);
//     root->left->right = new TreeNode(5);
//     root->left->right->right = new TreeNode(9);

//     root->right->left = new TreeNode(6);
//     root->right->left->left = new TreeNode(10);
//     root->right->right = new TreeNode(7);
//     root->right->right->left = new TreeNode(11);

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
// struct TreeNode
// {
//     int val;
//     struct TreeNode *left;
//     struct TreeNode *right;
//     TreeNode(int val)
//     {
//         this->val = val;
//         left = right = nullptr;
//     }
// };
// int maxPathLength(TreeNode *root, int &maxi){
//     if(root == nullptr) return 0;

//     int leftSum = maxPathLength(root->left, maxi);
//     int rightSum = maxPathLength(root->right, maxi);

//     maxi = max(maxi, leftSum+rightSum+ root->val);
//     return root->val + max(leftSum, rightSum);

// }

// int main()
// {
//     struct TreeNode *root = new TreeNode(1);
//     root->left = new TreeNode(2);
//     root->right = new TreeNode(3);

//     root->left->left = new TreeNode(4);
//     root->left->left->right = new TreeNode(8);
//     root->left->right = new TreeNode(5);
//     root->left->right->right = new TreeNode(9);

//     root->right->left = new TreeNode(6);
//     root->right->left->left = new TreeNode(10);
//     root->right->right = new TreeNode(7);
//     root->right->right->left = new TreeNode(11);
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

// #include <bits/stdc++.h>
// using namespace std;
// struct TreeNode
// {
//     int data;
//     struct TreeNode *left;
//     struct TreeNode *right;
//     TreeNode(int val)
//     {
//         data = val;
//         left = right = nullptr;
//     }
// };
// class Solution
// {
// public:
//     void fun(TreeNode *root, vector<vector<int>> &v)
//     {
//         if (root == nullptr)
//             return;
//         queue<TreeNode *> q;

//         q.push(root);
//         q.push(nullptr);
//         int i = 0, j = 0;
//         while (!q.empty())
//         {
//             TreeNode *temp = q.front();
//             q.pop();
//             if (temp != nullptr)
//             {
//                 v[i].push_back(temp->data);
//             }
//             else
//             {
//                 i++;
//             }
//             if (temp->left != nullptr)
//                 q.push(temp->left);
//             if (temp->right != nullptr)
//                 q.push(temp->right);
//         }
//     }
//     vector<vector<int>> levelOrder(TreeNode *root)
//     {
//         vector<vector<int>> v;
//         fun(root, v);
//         return v;
//     }
// };

// int main()
// {
//     struct TreeNode *root = new TreeNode(1);
//     root->left = new TreeNode(2);
//     root->left->left = new TreeNode(3);
//     root->left->right = new TreeNode(3);

//     root->right = new TreeNode(2);
//     root->right->left = new TreeNode(3);
//     Solution s;
//     vector<vector<int>> v = s.levelOrder(root);
//     for(int i = 0; i< v.size() ; i++){
//         for(int j = 0; j<v[i].size() ; j++){
//             cout<<v[i][j]<<" ";
//         }
//     }
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Question: find the node having the value equal to the given data and returning the complete sub binary tree

// #include <bits/stdc++.h>
// using namespace std;
// struct TreeNode
// {
//     int data;
//     struct TreeNode *left;
//     struct TreeNode *right;
//     TreeNode(int data)
//     {
//         this->data = data;
//         left = right = nullptr;
//     }
// };
// class Solution
// {
// public:
//     TreeNode *searchBST(TreeNode *root, int val)
//     {
//         if (root == nullptr)
//             return nullptr;

//         if (root->data == val)
//         {
//             return root;
//         }
//         if (val < root->data)
//         {
//             return searchBST(root->left, val);
//         }
//         return searchBST(root->right, val);
//     }
// };
// int main()
// {
//     struct TreeNode *root = new TreeNode(4);
//     root->left = new TreeNode(2);
//     root->right = new TreeNode(7);
//     root->left->left = new TreeNode(1);
//     root->left->right = new TreeNode(3);
//     Solution s;
//     s.searchBST(root, 7);
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Level Order Traversal

// #include <bits/stdc++.h>
// using namespace std;
// struct TreeNode
// {
//     int data;
//     struct TreeNode *left;
//     struct TreeNode *right;
//     TreeNode(int data)
//     {
//         this->data = data;
//         left = right = nullptr;
//     }
// };
// class Solution
// {
// public:
//     vector<vector<int>> LevelOrder(TreeNode *root)
//     {
//         vector<vector<int>> result;
//         if (!root)
//         {
//             return result;
//         }

//         queue <TreeNode*> q;
//         q.push(root);
//         while(!q.empty()){

//             vector <int> v;
//             int levelSize = q.size();
//             for(int i  = 0; i < levelSize; i++){
//                 TreeNode *temp = q.front();
//                 q.pop();
//                 v.push_back(temp->data);
//                 if(temp->left) q.push(temp->left);
//                 if(temp->right) q.push(temp->right);
//             }
//             result.push_back(v);
//         }
//         return result;
//     }
// };
// //   4
// // 2   7
// //     1  3

// int main()
// {
//     struct TreeNode *root = new TreeNode(4);
//     root->left = new TreeNode(2);
//     root->right = new TreeNode(7);
//     root->right->left = new TreeNode(1);
//     root->right->right = new TreeNode(3);
//     Solution s;
//     vector <vector<int>> result = s.LevelOrder(root);

//     cout<<"[ ";
//     for(const auto& vec: result){
//         cout<<" [ ";
//         for(int result : vec){
//             cout<<result<<" ";
//         }
//         cout<<"] ";
//     }
//     cout<<" ]";
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ZIG ZAG LEVEL ORDER TRAVERSAL;

// #include <bits/stdc++.h>
// using namespace std;
// struct TreeNode
// {
//     int data;
//     struct TreeNode *left;
//     struct TreeNode *right;
//     TreeNode(int data)
//     {
//         this->data = data;
//         left = right = nullptr;
//     }
// };
// class Solution
// {
// public:
//     vector<vector<int>> ZigZag(TreeNode *root)
//     {
//         vector<vector<int>> result;
//         if (!root)
//             return result;

//         queue<TreeNode *> q;
//         q.push(root);
//         bool flag = true; // L->R  false means R->L

//         while (!q.empty())
//         {
//             int levelSize = q.size();
//             vector<int> v(levelSize);
//             if (flag)
//             {
//                 for (int i = 0; i < levelSize; i++)
//                 {
//                     TreeNode *temp = q.front();
//                     q.pop();

//                     v[i] = temp->data;
//                     if (temp->left)
//                         q.push(temp->left);
//                     if (temp->right)
//                         q.push(temp->right);
//                 }
//             }else if(!flag){
//                 for (int i = levelSize - 1 ; i >= 0; i--)
//                 {
//                     TreeNode *temp = q.front();
//                     q.pop();

//                     v[i] = temp->data;
//                     if (temp->left)
//                         q.push(temp->left);
//                     if (temp->right)
//                         q.push(temp->right);
//                 }
//             }
//             result.push_back(v);
//             flag = !flag;
//         }
//         return result;
//     }
// };
// int main()
// {
//     struct TreeNode *root = new TreeNode(4);
//     root->left = new TreeNode(2);
//     root->right = new TreeNode(7);
//     root->right->left = new TreeNode(1);
//     root->right->right = new TreeNode(3);
//     Solution s;
//     vector<vector<int>> result = s.ZigZag(root);

//     cout << "[ ";
//     for (const auto &vec : result)
//     {
//         cout << " [ ";
//         for (int result : vec)
//         {
//             cout << result << " ";
//         }
//         cout << "] ";
//     }
//     cout << " ]";
//     return 0;
// }
