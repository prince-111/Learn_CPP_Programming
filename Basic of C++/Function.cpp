#include<bits/stdc++.h>
using namespace std;
// Function are set of code which performs  somethign for you.
// Function are used to modularise code.
// Function are used to increase readability.
// Function are used to use sam code multiple times.

// void -> which does not return anything
// return 
// parameterised
// non parameterised

// print name
void printName(){
    cout<<" Hello !"<<endl;
}
 
 // with parameter 
void printName2(string name){
    cout<<" hey "<<name<<endl;
}


// take two numbers and print its sum
 void sum(int num1, int num2){
        int num3 = num1+num2;
        
        cout<<num3<<endl;
 }

// retrun maxx numbers
  int maxx(int num1, int num2){
      if(num1>=num2) return num1;
      else return num2;
  }
  
// return minn numbers
 int minn(int num1, int num2){
     if(num1<=num2) return num1;
     else return num2;
 }

int main(){ 
    string name;
    cin>>name;
    
    printName2(name);
    printName();
    
    string name2;
    cin>>name2;
    printName2(name2);
  
    
    int num1, num2;
    cin>>num1>>num2;
    sum(num1 , num2);
    
    int maximum = maxx(num1, num2);
    cout<<maximum<<endl;
    
    int minimum = minn(num1, num2);
    cout<<minimum<<endl;
    
    return 0;
}
