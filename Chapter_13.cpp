/////Vectors in C++
/////Vectors are dynamic arrays.We can resize this kind of arrays when we want to insert or remove/delete some elements.
/////remember arrays and vectors are not the same. Arrays cant be resized but vectors can be resized.


/////Basic Operations in Vectors

////(1)Declaration       we has to include header file ie    #include <vector>
////                                                 then    vector <dataType> vectorName (size);   specifying size is your choice
////eg.

// #include <iostream>
// #include <vector>
// using namespace std;
// int main (){
//     vector <int> vecName (4);
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main (){
//     vector <int> vecName={1,2,3,4,5,6,0,9,1};
//     for(int i=0;i<vecName.size(); i++){
//         cout<<vecName[i]<<endl;
//     }

// }


////(2)Size of vector; find with syntax vectorName.size();  this gives the length of vector.

// #include <iostream>
// #include <vector>
// using namespace std;
// int main (){
//     vector <int> vecName (4);
//     cout<<vecName.size();  ////output 4  bcoz the size or the length or the number of element is 4 here
//     return 0;
// }


/////(3)Resizing the vector;  means adding some elements in the existing vectors.
//// syntax       vectorname.resize(newSize);
////eg.

// #include <iostream>
// #include <vector>
// using namespace std;
// int main (){
//     vector <int> vecName (4);
//     cout<<vecName.size()<<endl;  ////output 4  bcoz the size or the length or the number of element is 4 here

//     vecName.resize(3);
//     cout<<vecName.size(); ////output is 3  new size
//     return 0;
// }



////(4)Capacity   it always greater thean equal to the size;       Capacity is mostly compiler dependent, 

// #include <iostream>
// #include <vector>
// using namespace std;
// int main (){
//     vector <int> vecName (4);
//     cout<<vecName.size()<<endl;  ////output 4  bcoz the size or the length or the number of element is 4 here
//     cout<<vecName.capacity()<<endl;


//     vecName.resize(3);
//     cout<<vecName.size()<<endl; ////output is 3  new size        
//     cout<<vecName.capacity()<<endl;
//     return 0;
// }



////(5) Adding some element in the vector at end.  syntax    vecName.push_back(element which you want to add);

// #include <iostream>
// #include <vector>
// using namespace std;
// int main (){
//     vector <int> vecName(3);
//     vecName.push_back(4);     ////new element will be added at the end of the vector

// }

////(6) Adding some element in the vector at any position.  syntax    vecName.pushback(position  ,  element which you want to add);

// #include <iostream>
// #include <vector>
// using namespace std;
// int main (){
//     vector <int> vecName(3);
//     vecName.insert(vecName.begin()+2, 234);     ////new element will be added at 3rd position of the vector

// }

/// first position is given by     vecName.begin();
/// last position is given by      vecName.end();

////(7) Deleting the last element     vecName.popback();

// #include <iostream>
// #include <vector>
// using namespace std;
// int main (){
//     vector <int> vecName(3);
//     vecName.pop_back();     ////last element will be deleted from the end of the vector
// }



