#include<bits/stdc++.h>
using namespace std;

//mmethod 1;
 string gcdOfStrings(string str1, string str2) {
      
      if (str1 + str2 != str2 + str1) {
            return "";
        }

        int gcdLength = gcd(str1.size(), str2.size());
        return str1.substr(0, gcdLength);
}

// method:2
string gcd(string str1, string str2){

    if (str1.length() < str2.length()) return gcd(str2, str1);
    
    else if(str1.find(str2) != 0) return "";
    
    else if (str2 == "") return str1;
    
    else return gcd(str1.substr(str2.length()), str2);
}

// int main(){
    
//     string str1, str2;
//     cin>>str1>>str2;
    
//     cout<<gcdOfStrings(str1, str2);
// }

// method: 3
// Function to find GCD of array of
// strings
string findGCD(string arr[], int n)
{
    string result = arr[0];
    for (int i = 1; i < n; i++){
        result = gcd(result, arr[i]);
    }
   
    // Return the GCD of strings
    return result;
}

int main() {
   
    // Given array  of strings
    string arr[]={ "GFGGFG",
                         "GFGGFG",
                         "GFGGFGGFGGFG" };
    int n = sizeof(arr)/sizeof(arr[0]);
   
    // Function Call
    cout << findGCD(arr, n);
}