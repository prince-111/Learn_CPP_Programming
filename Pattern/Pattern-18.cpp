// pattern-18 print reverse character trangle.
/*

F 
E F 
D E F 
C D E F 
B C D E F 
A B C D E F 


*/

#include <iostream>
using namespace std;

void print18(int n){
    
      for(int i=0; i<n; i++){
         for(char ch='F'-i; ch<='F'; ch++){
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
	    print18(n);
	}
	return 0;
}
