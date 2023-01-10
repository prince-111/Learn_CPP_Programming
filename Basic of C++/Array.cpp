#include<bits/stdc++.h>
using namespace std;

int main(){    
    
    int arr[5];
    
    // take input from the user
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    
    arr[2] += 10;
    
    cout<<arr[2]<<endl;
    
    int arr2[5]={2,4,6,8,1};
    
    cout<<"The number are: ";
    
    //printing array elements
    // using range based for loop
    for(const int &n : arr2){
        cout<<n<<" ";
    }
    cout<<endl;
    cout<<"The number are: ";
    // printing array elements
    // using traditional for loop
    for(int i=0; i<5; i++){
        cout<<arr2[i]<<" ";
    }
    
    
    int arr3[5];
    cout<<"enter the numbers: ";
    
    //store input from user to array.
    for(int i=0; i<5; i++){
        cin>>arr3[i];
    }
    
    cout<<"the numbers are: ";
    
    // print array elements
    for(int i=0; i<5; i++){
        cout<<arr3[i]<<" ";
    }
    
	return 0;
}
