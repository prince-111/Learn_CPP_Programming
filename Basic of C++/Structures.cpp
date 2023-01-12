#include <iostream>
#include <string>
using namespace std;
// To access members of a structure, use the dot syntax (.):
// A structure is a user-defined data type in C/C++. 
// A structure creates a data type that can be used to group items of possibly different types into a single type. 
// Structures in C++ are user defined data types which are used to store group of items of non-similar data types. 
/*
Structures in C++ can contain two types of members:  
    (1) Data Member: These members are normal C++ variables. 
          We can create a structure with variables of different data types in C++.
    (2) Member Functions: These members are normal C++ functions. 
          Along with variables, we can also include functions inside a structure declaration.
*/

// Declare a structure named "car"
struct car {
    // Data Member
  string brand;
  string model;
  int year;
};

// Member Functions
int main() {
  // Create a car structure and store it in myCar1;
  car myCar1;
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

  // Create another car structure and store it in myCar2;
  car myCar2;
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;
 
  // Print the structure members
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
 
  return 0;
}






// int main() {
//   struct {
//     // Data members
//     int myNum;
//     string myString;
//   } myStructure;

//   myStructure.myNum = 4;
//   myStructure.myString = "Hello World!";

//   cout << myStructure.myNum << "\n";
//   cout << myStructure.myString << "\n";
//   return 0;
// }
