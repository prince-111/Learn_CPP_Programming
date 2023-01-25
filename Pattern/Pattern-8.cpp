// pattern-8  Print  Inverted Full Pyramid.
/*

*********    
 *******   
  *****  
   *** 
    *

*/
#include<iostream>
using namespace std;

void print8(int n){
    for(int i=0; i<n; i++){
        // space
        for(int j=0; j<i; j++){
            cout<<" ";
        }  
        // star
        for(int j=0; j<2*n -(2*i+1); j++){
            cout<<"*";
        }
        // spacce
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print8(n);
}

