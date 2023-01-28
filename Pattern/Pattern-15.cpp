// pattern-15  reverse character trangle form.
/*

A B C D E F 
A B C D E 
A B C D 
A B C 
A B 
A 

*/

#include <iostream>
using namespace std;

void print15(int n){
    
      for(int i=0; i<n; i++){
       for(char ch='A'; ch<='A'+(n-i-1); ch++){
          cout<<ch<<" ";
      }
      cout<<endl;
    }
}

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    int n;
	    cin>>n;
	    print15(n);
	}
	return 0;
}
