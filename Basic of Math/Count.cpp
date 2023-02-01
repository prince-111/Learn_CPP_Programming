#include<iostream>
using namespace std;

// by Function:-

int count_digit(int n){
    int x=n, count=0; 
    
    while(x!=0){
        x=x/10;
        count++;
    }
    return count;
}

int main(){
    int n;
    cin>>n; 
    
    cout<<" NUmber of digit in "<< n <<" "<<" is "<< count_digit(n);
}



// int main(){
    
//     int n;
//     cin>>n;
    
//     int count=0;
//     while(n!=0){
        
//         n = n/10;
//         count++;
//     }
//     cout<<count;
// }

 