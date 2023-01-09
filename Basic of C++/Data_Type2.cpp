#include<bits/stdc++.h>
using namespace std;

int main() {
  cout << "Size of following Datatypes in bytes: \n";
  cout << "int : " << sizeof(int) << endl;
  cout << "unsigned int : " << sizeof(unsigned int) << endl;
  cout << "short int : " << sizeof(short int) << endl;
  cout << "long int : " << sizeof(long int) << endl;
  cout << "unsigned short int : " << sizeof(unsigned short int) << endl;
  cout << "unsigned long int : " << sizeof(unsigned long int) << endl;
  cout << "long long int : " << sizeof(long long int) << endl;
  cout << "unsigned long long int : " << sizeof(unsigned long long int) << endl;
  cout << "signed char : " << sizeof(signed char) << endl;
  cout << "unsigned char : " << sizeof(unsigned char) << endl;
  cout << "wchar_t : " << sizeof(wchar_t) << endl;
  cout << "float : " << sizeof(float) << endl;
  cout << "double : " << sizeof(double) << endl;

  return 0;
}

// Abstract or User-Defined Data types
     //    1. Class 
 /* A Class is a C++ building piece that leads to Object-Oriented programming. 
    It's a user-defined data type with its own set of data members and member functions 
    that can be accessed and used by establishing a class instance. A class defines the blueprint for a data type. */    

   class scaler {
  public:
    string student_name;
    
    void print_name() {
      cout << "Student name is: " << student_name << endl;
    }
};

int main() {
  scaler student1, student2;
  student1.student_name = "Prince Kumar";
  student1.print_name();
  student2.student_name = "Sachin Singla";
  student2.print_name();
  return 0;
}

     // 2. Structure
/* A structure datatype is a user-defined data type that combines objects of 
  potentially different data types into a single type. */

   struct student {
     char name[15];
     char roll_no[10];
     int marks;
  };
   
       // 3. Union
 /* Union is similar to Structures as it is also used to combine the different types of data into a single user-defined data type.
   All members of a union have access to the same memory. 
   In the below-shown example, we can combine the integer data type and the character data type into a single data type called test. 
   In this case, as both the data types, integer, and character have different data sizes, we would take the larger data type as the size of 
   the new user-defined data type test. We can see how changes in num are reflected in var if we adjust num.*/    
   union test {
    int num;
    char var;
 };
 
      // 4. Enumeration
/* In C++, an enumeration (or enum) is a data type that the user creates. 
  It's primarily used to give integral constant names, making the program easier to comprehend and maintain. 
  In enumeration, if we do not provide the integral values explicitly to the strings, then, in that case, 
  the strings automatically start assigning the integral values starting from value 0, the same as the case of 0-based indexing.*/
    
      enum result {pass = 100, fail = 0};

      enum result res;
       res = pass;

         // 5. Typedef defined DataType
 /* The term typedef in C++ allows you to declare explicit new data type names. 
   Using typedef does not create a new data class; instead, it gives an existing type a name. 
   Because just the typedef statements would need to be updated, a program's portability might be improved by making minimal changes. 
   By permitting descriptive terms for the standard data types, typedef can aid in self-documenting code.*/        
   
         typedef long int ll;
           ll val;
           val = 123;

/*
 1. There are three data types in C++ which are primitive data types, abstract data types, and derived data types.
 2. Primitive data types include integer, floating-point, character, boolean, double floating-point, valueless or void, and wide character.
 3. User-defined or Abstract Data types include class, enumeration, union, structure, and typedef defined data type.
 4. Derived Data types include array, function, pointer, and reference.
 5. Different data modifiers are short, long, signed, and unsigned, which we could apply to data types like int, double, char, etc.

*/