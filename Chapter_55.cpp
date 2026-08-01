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