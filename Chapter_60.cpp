///////////////////////////////////////////////////////////////////////////////////////////////////////////////
///                                                     HASHMAP                                             ///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

//assign unique index to the each elements

//this is done by applying hash function h(k) on the elements 

// eg .   k%10  could be hash function.

//the unique indices are called hash values

// we simply have bucket and divide it,,,we apply hash function on the element ,, get the hash value and fill the hash table


//////////////////////////////////////////////////////////
//Different kind of hash function


//(1) Division function 
//eg. k mod 11   or k % 11


//(2) Mid square method
//eg.   k = 60  ;  k^2 = 3600 ;  mid values = 60 ; hash value = 60
//eg.   k = 25  ;  k^2 = 625 ; mid value = hash value = 2

//(3) digit folding method
//suppose we have a number and k1k2k3k4k5k6.....kn ae the digits
//then we separate equal number of digit and then add them
//eg.  123456789 this is my number ; i am taking two digit pair and adding them
// => 12+34+56+78+9 = 189 == hash value


//(4) Multiplication Method

/////////////////////////////////////////////////////////////////////

//COLLISION
//When two element have same hash value

///(M) Separate Chaining: Use linked list next two the element having same hash values

///(M) Closed hashing
//(1) Linear Probing  ;  we store the element at position  h(k)+i   0<=i=<9

//(2) Quadratic Probing  ;  we store the element at position  h(k)+i^2  0<=i=<9 : it prevent formation of cluster

//(3) Double hashing Probing  ;  




/////////////////////////////////////////////////////////////////////
//LOAD FACTOR = (n/m) = it gives us average entries in a bucket

// where n = number of elements
//and m =  number of bucket we have



