#include<bits/stdc++.h>
using namespace std;

int main(){
    
     int num1,num2, gcd;
     cin>>num1>>num2;
     
     for(int i=1; i<=min(num1,num2); i++){
         if(num1%i==0 && num2%i==0){
             gcd=i;
         }
     }
     int lcm=(num1*num2)/gcd;
     cout<<"the lcm of the two given number:- "<<lcm;
     
}