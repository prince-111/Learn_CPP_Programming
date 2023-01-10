#include<bits/stdc++.h>
using namespace std;

int main(){ 
    /*
      do {
         // body of the loop
      }
       while (condition); 
    */
    
    int i=1;
    
    do{
        cout<<"Prince"<<endl;
        i++;
    }
    while(i<=5);
    
    // print the number
    int t=1;
    do{
        cout<<t<<" ";
        t++;
    }
    while(t<=5);
    
    //sum the number
    int num, j=0;
    int sum = 0;
     cout << "Enter a number: ";
        // take input from the user
      cin >> num;

    do {
        // store the sum of natural number
        sum += j;
          j++;
    }
    while (j<=num);
    
    // display the sum
    cout << "\nThe sum is " << sum << endl;
  
	return 0;
}
