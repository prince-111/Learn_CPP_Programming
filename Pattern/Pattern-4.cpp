// pattern-4 Print a Half-Pyramid repeat Number Pattern.
/*

1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
6 6 6 6 6 6

*/

#include<iostream>
using namespace std;

void print4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print4(n);
}
