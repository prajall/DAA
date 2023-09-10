#include<iostream>
#include<math.h>
using namespace std;

int binarySearch(int A[],int key,int l,int r){

int m;
	if (l<r){
		m = floor((l+r)/2);
		if(A[m] == key){
			return m;
		}
		else if (A[m] > key){
			binarySearch(A,key,l,m-1);
		}
		else {
			binarySearch(A,key,m+1,r);
		}
	}
	else{
		return -1;
	}
}

int main()
{
	int A[]={2,5,9,12,15,19,22,30,32,39};
	int n = sizeof(A)/sizeof(A[0]);
	
	int index = binarySearch(A,30,0,n-1);
	cout<<index;
}
