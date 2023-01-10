#include<bits/stdc++.h>
using namespace std;

int main(){    
    
    string s = "Prince";
    
    int length = s.size();
    
    //change value
    s[length-1] = 's';
    
    cout<<s[length-1]<<endl;
    cout<<"length of string:-"<<length;
   
   string str;
  
   cout<<"Enter the string: ";
//   cin>>str;  // in there only one word taken.
   
   getline(cin, str); // take all words.
   cout<<"You entered: "<<str<<endl;
   
	return 0;
}
