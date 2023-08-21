#include <iostream>
using namespace std;
int count=0;

int Fibonacci(int n){
	if (n == 0){
//		count++;
		return 1;
	}
		
	else if (n == 1){
//		count++;
		return 1;
	}
	else{
//	count++;	
		return (Fibonacci(n-1)+Fibonacci(n-2));
	}
}
int main()
{
	int n=9;
	for (int i=0;i<n;i++){
		count++;
		cout<<Fibonacci(i)<<" ";
	}
	
	cout<<"\nComplexicity: "<<count;	
}
