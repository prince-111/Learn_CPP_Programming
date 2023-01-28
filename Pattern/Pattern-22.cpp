// pattern-22 print square broundre will same number.
/*

555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555

*/

#include <iostream>
using namespace std;

void print22(int n){
      for(int i=0; i<2*n-1; i++){
       for(int j=0; j<2*n-1; j++){
           int top = i;
           int left = j;
           int right = (2*n-2)-j;
           int down = (2*n-2)-i;
           cout<<(n-min(min(top,down), min(left, right)));
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
	    print22(n);
	}
	return 0;
}
