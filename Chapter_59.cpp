////SET

//it is STL(Standard template library) container Used to store unique elements
//it store values in ordered state (increasing order and decreasing oder)
//no idexing
//elements are identified by their own values
//once value is inserted in a set, it cannot be identified
//dynamic size, no overflow errors
//faster


//O(log N)

//Declaration
//#include <set>       
//set<data_type> set_name; // increasing order
//set<data_type> set_name = {1,2,3,4};

//Set <datatype, greater<data_type>> set_name;  // decreasing order


/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
//insertion
//  set_namw.insert(10);       it returns an iterator to the inserted value



// #include <iostream>
// using namespace std;
// #include <set>

// int main (){
//     set <int> set_name ;

//     set_name.insert(18);
//     set_name.insert(8);
//     set_name.insert(8);
//     set_name.insert(1);


//     cout<<set_name.size();
// }




///  set_name.begin();   point to the first element of the set
/// set_nmae.end();  point to the the position after the last element of the set


// #include <iostream>
// #include <set>
// using namespace std;
// int main(){
//     set <int> s1;
//     set <int> :: iterator itr;
     

//     for(int i= 0 ; i< 10; i++){
//         int p;
//         cin>>p;
//         s1.insert(p);
//     }


//     for(itr = s1.begin() ; itr!= s1.end(); itr++ ){
//         cout<<*itr<<" ";     
//     }
//     cout<<endl;

//     //OR

//     for(auto value:s1){
//         cout<<value<<" ";
//     }

// }

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////


///erasing / deletion

// set_name.erase(value);

//or  set_name.erase(position);

//or for range deletion  set_nmae.erase(start_pos, end_pos);     delete element from start position to end position including first position but excluding last
//eg set = { 1, 2,3 ,4 ,5 }   erase(1,3)       deleting 2 3   not 4





/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////

//MEMBER FUNCTION
