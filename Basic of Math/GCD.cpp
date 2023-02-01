#include<iostream>
#include<math.h>
using namespace std;

int gcd(int m, int n){
    if(n==0){
        return m;
    }
    
    // Using Euclidean’s theorem.
    return gcd(m, m%n);
}

int main(){
    int a,b;
    cin>>a>>b;
    
    cout<<gcd(a,b);
}



// int main(){
    
//      int num1,num2,ans;
//      cin>>num1>>num2;
     
//      for(int i=1; i<=min(num1,num2); i++){
//          if(num1%i==0 && num2%i==0){
//              ans=i;
//          }
//      }
//      cout<<ans;
     
// }