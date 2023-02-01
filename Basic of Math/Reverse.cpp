#include<iostream>
using namespace std;

int main(){
    
    int n, reverse=0;
    cin>>n;
    
    if((reverse > INT_MAX/10) || (reverse<INT_MIN))
    return 0;

    while(n!=0){
        
      int digit = n%10;
      reverse = reverse*10 + digit;
      n = n/10;
    }
    cout<<reverse<<endl;
}

 