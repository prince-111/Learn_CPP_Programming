#include<bits/stdc++.h>
using namespace std;

// pass by value
void doSomething(int num){
    cout<<num<<endl;
    num +=5;
    
    cout<<num<<endl;
    num +=2;
    
    cout<<num<<endl;
}

// pass by reference (&)
void doSomething2(string &s){
    s[0]='m';
    
    cout<<s<<endl;
}

// pass by reference with array.
void doSomething3(int arr[], int n){
    arr[0] +=100;
    
    cout<<"value inside function: "<<arr[0]<<endl;
}

int main(){
    int num = 20;
    doSomething(num);  
    cout<<num<<endl;
    
    string s = "rohan";
    doSomething2(s);
    cout<<s<<endl;
    
    
    int n=5;
    int arr[n];
    
    for(int i=0; i<n; i=i+1){
        cin>>arr[i];
    }
    
    doSomething3(arr,n);
    
    cout<<"Value inside int main: "<<arr[0]<<endl;
    return 0;
}