/////STACK QUESTIONS

// PROBLEM 1

// BAlanced bracket sequence
// Input:  ()()()(()))
// Output: NO

// Input: ()()(())
// Output: YEs

// #include <iostream>
// using namespace std;

// int main()
// {
//     string b;
//     int op = 0;
//     int cl = 0;
//     cin >> b;
//     for (int i = 0; i < b.length(); i++)
//     {
//         if (i == 0 and b[i] != '(')
//         {
//             cout << "NO\n";
//             return 0;
//         }
//         if (i == b.length() - 1 and b[i] != ')')
//         {
//             cout << "NO\n";
//             return 0;
//         }

//         if(b[i] == '('){
//             op++;
//         }else{
//             cl++;
//         }
//         if(op < cl){
//             cout<<"NO\n";
//             return 0;
//         }
//     }
//     cout<<op<<" "<<cl<<"\n";
//     if(op == cl){
//         cout<<"YES\n";
//     }else{
//         cout<<"NO\n";
//     }
// }

/// Using STACKS

// Space Complexity O(n)
// Time Complexity O(n)

// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {

//     string s;
//     cin >> s;
//     stack<char> st;

//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == '(' or s[i] == '{' or s[i] == '[')
//         {
//             st.push(s[i]);
//         }
//         else if (!st.empty())
//         {
//             if (s[i] == ')' and st.top() == '(')
//             {
//                 st.pop();
//             }
//             else if (s[i] == '}' and st.top() == '{')
//             {
//                 st.pop();
//             }
//             else if (s[i] == ']' and st.top() == '[')
//             {
//                 st.pop();
//             }
//         }else{
//             cout<<"Unbalanced\n";
//             return 0;
//         }
//     }

//     if (st.empty())
//     {
//         cout << "Balanced\n";
//     }
//     else
//     {
//         cout << "Unbalanced\n";
//     }
// }

//////////////////////////////////////////////////
////////////////////////////////////////////////

//////////////////////////////////////////////////
////////////////////////////////////////////////

// Problem? NEXT GREATER ELEMENT
//(NGE)

// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n, -1);
//     int input[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> input[i];
//     }

//     stack<int> st;

//     for (int i = 0; i < n; i++)
//     {
//         if (i == 0)
//         {
//             st.push(i);
//         }
//         while (!st.empty() and input[i] > input[st.top()])
//         {
//             arr[st.top()] = input[i];
//             st.pop();
//         }
//         st.push(i);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }



///////////////////