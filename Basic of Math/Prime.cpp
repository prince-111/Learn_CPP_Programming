/*
A prime number is a natural number that is only divisible by 1 and by itself. 
Examples 1 2 3 5 7 11 13 17 19 …
*/

#include<bits/stdc++.h>

using namespace std;

bool isPrime(int N) {
  for (int i = 2; i < N; i++) {
    if (N % i == 0) {
      return false;
    }
  }
  return true;
}
int main() {

  int n = 11;

  bool ans = isPrime(n);
  if (n != 1 && ans == true) {
    cout << "Prime Number";
  } else {
    cout << "Non Prime Number";
  }
  return 0;
}