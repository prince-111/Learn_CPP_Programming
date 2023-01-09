/*
      Data Type	  Size	                  Description
       boolean	  1 byte	       Stores true or false values
       char	      1 byte	       Stores a single character/letter/number, or ASCII values
       int	      2 or 4 bytes	   Stores whole numbers, without decimals
       float	  4 bytes	       Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
       double	  8 bytes	       Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
 //1.Primitive Data types
    
    // 1.1 int
    int x = 4;
    
    // 1.2 long
    long y = 6;
    
    long long z = 2300000;
    
    // 1.3 float, double
    float a = 3.5;
    double b = 56;
    
    // string and getline
    // string s1;
    // string s2;
    
    // cin>>s1>>s2;
    // cout<<s1<<" "<<s2;
	
	string str;
	getline(cin, str); // take a whole of sentence. 
	cout<<str;
	
	// 1.4 char
	string ch = "p";
	cout<<ch;
	
	// 1.5 floating point
	float val= 132.32;
	
	// 1.6 double floating
	double val = 45657.12343
	
// 2.Derived Data types
       //2.1 function.
 /* A function is a block of code which only runs when it is called. 
    You can pass data, known as parameters, into a function. 
    Functions are used to perform certain actions, and they are important for reusing code: 
    Define the code once, and use it many times*/      
    
    //   Syntax:
//   function_return_type function_name(parameters){ }
     int sum(int num1, int num2) {
        return (num1 + num2);
     }
       
       // 2.2 Array
 /* An array is a set of elements that are kept in memory in a continuous manner and also have the same type of data present within the array. 
    The purpose of an array is to store a lot of data in a single variable name and sequential order.*/      
    
    //   Syntax:
// datatype array_name[size_of_array];

   int arr[4]={0,1,2,3};

      // 2.3 Pointer
 /* Pointers are symbolic representations of addresses. 
    Pointers store the addresses of the variables having the same datatype as that of the pointer. 
    The size of the pointer is either 4 bytes or 8 bytes, no matter what the data type is. 
    They enable programs to create and change dynamic data structures, as well as to imitate call-by-reference. 
    In C/C++, its generic declaration looks like this:*/

    //   Syntax:
// data_type* variable_name;
     
     int* point_int;
     
      // 2.4 Reference 
 /* When we declare a variable as a reference, it becomes an alternate name for an existing variable. 
 By adding '&' to a variable's declaration, it can be declared as a reference.
 Here ref becomes the reference to integer val, and now any changes in one would be automatically reflected in the other as they both represent the same memory location. */     
      int val = 1234;
      int &ref = val;
      
	
	return 0;
}
