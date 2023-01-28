// pattern-21 print spaces inside square using stars.
/*

*****
*   *
*   *
*   *
*****


*/

#include <iostream>
using namespace std;

void print21(int n){
      for(int i=0; i<n; i++){
       for(int j=0; j<n; j++){
           if(i==0 || j==0 || i==n-1 || j== n-1){
               cout<<"*";
           }
           else cout<<" ";
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
	    print21(n);
	}
	return 0;
}
