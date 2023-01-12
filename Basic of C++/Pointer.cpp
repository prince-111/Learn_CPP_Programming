/*
  - the memory address of a variable by using the (&) operator:
  - A pointer however, is a variable that stores the memory address as its value.
  - A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. 
       The address of the variable you're working with is assigned to the pointer:
  - we used the pointer variable to get the memory address of a variable (used together with the & reference operator). 
       However, you can also use the pointer to get the value of the variable, by using the * operator (the dereference operator):        
       
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string* ptr = &food;

  // Output the value of food
  cout << food << "\n";

  // Output the memory address of food
  cout << &food << "\n";

  // Access the memory address of food and output its value
  cout << *ptr << "\n";
  
  // Change the value of the pointer
  *ptr = "Hmburger";
  
  // Output the new value of the pointer
  cout << *ptr << "\n";
  
  // Output the new value of the food variable
  cout << food << "\n";
  return 0;
}
