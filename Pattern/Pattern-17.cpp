// pattern-17 Print a Pyramid Using Character.
/*

     A     
    ABC    
   ABCDE   
  ABCDEFG  
 ABCDEFGHI 
ABCDEFGHIJK

     A     
    ABA    
   ABCBA   
  ABCDCBA  
 ABCDEDCBA 
ABCDEFEDCBA

*/

#include <iostream>
using namespace std;

void print17(int n){
    
      for(int i=0; i<n; i++){
          for(int j=0; j<n-i-1; j++){
             cout<<" ";
          }
          // character
          char ch='A';
          for(int j=0; j<2*i+1; j++){
              cout<<ch;
              ch++;
          }
          // space
          for(int j=0; j<n-i-1; j++){
              cout<<" ";
          }
          cout<<endl;
          
    }
}
void print17a(int n){
    
      for(int i=0; i<n; i++){
          for(int j=0; j<n-i-1; j++){
             cout<<" ";
          }
          // character
          char ch='A';
          int breakpoint = (2*i+1)/2;
          for(int j=1; j<=2*i+1; j++){
              cout<<ch;
              if(j<=breakpoint)
              ch++;
              else ch--;
          }
          // space
          for(int j=0; j<n-i-1; j++){
              cout<<" ";
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
	    print17(n);
	}
	return 0;
}
