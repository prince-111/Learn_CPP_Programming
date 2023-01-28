// pattern-12 just like miror value print.
/*

1          1
12        21
123      321
1234    4321
12345  54321
123456654321

*/

#include <iostream>
using namespace std;

void print12(int n){
    int space = 2* (n-1);
    
    for(int i=1; i<=n; i++){
        // numbers
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        // space
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        // space
        for(int j=i; j>=1; j--){
            cout<<j;
        }
        cout<< endl;
        space -=2;
    }
}

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    int n;
	    cin>>n;
	    print12(n);
	}
	return 0;
}
