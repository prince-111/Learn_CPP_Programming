// pattern-13 Print Floyd's Triangle.
/*

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 21 

*/
#include <iostream>
using namespace std;

void print13(int n){
    int num=1;
    
    for(int i=1; i<=n; i++){
      for(int j=1; j<=i; j++){
          cout<<num<<" ";
          num = num+1;
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
	    print13(n);
	}
	return 0;
}
