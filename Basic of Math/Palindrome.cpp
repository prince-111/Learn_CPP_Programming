#include<iostream>
using namespace std;


// method: 1
int main(){
    
     int n;
     cin>>n;
     int dummy=n;
     int reverse=0; 
     while(n!=0){
         int digit = n%10;
         reverse = reverse*10 +digit;
         n /=10;
     }
     cout<<reverse<<endl;
     
     if(reverse==dummy) cout<<"palimdrome";
     
     else cout<<" not";
}

//  Method: 2
 int reverse(int X) {
   int Y = 0;
   while (X > 0) {
      //Extract the last digit
      int digit = X % 10;
      //Appending last digit
      Y = Y * 10 + digit;
      // Shrinking X by discarding the last digit
      X = X / 10;
   }
   return Y;
}
int main() {
   int X = 121;
   int dummy = X;
   int Y = reverse(X);
   if (dummy == Y) {
      cout << "Palindrome Number" << endl;
   } else {
      cout << "Not Palindrome Number" << endl;
   }
   return 0;
}