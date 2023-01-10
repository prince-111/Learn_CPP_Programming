#include<bits/stdc++.h>
using namespace std;

int main(){    
    /*
    for (initialization; condition; update) {
    // body of-loop 
    } 
    */
    
    
    // print 5 times name print.
    for(int i=1; i<=30; i=i+3){
        cout<<i<<" "<<"Prince"<<endl;
    }
    
    // print the number.
    for(int j=1; j<=5; j++){
        cout<<j<<" ";
    }
   
   // sum of the number.
   int num, sum=0;
   cout<<"Enter positive number: ";
   cin>>num;
   
   for(int i=0; i<=num; i++){
       sum +=i;
   }
   cout<<"Sum = "<<sum<<endl;
  
	return 0;
}
