#include<iostream>
using namespace std;

void printDivisorsBruteForce(int n){

	cout<<"The Divisors of "<<n<<" are:"<<endl;
	for(int i = 1; i <= n; i++)
		if(n % i == 0)
			cout << i << " ";
	
	cout << "\n";
}

	
int main(){
		
		int n;
		cin>>n;

	printDivisorsBruteForce(n);
	
return 0;
}
Output: