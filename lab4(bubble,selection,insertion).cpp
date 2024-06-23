#include<iostream>
using namespace std;

int bubbleSortComplexity = 0;
int selectionSortComplexity = 0;
int insertionSortComplexity = 0;

void bubbleSort(int A[],int n)
{
    int i,j;

    for (i=0;i<n;i++){
        for (j=0;j<n-1-i;j++){
                bubbleSortComplexity++;
            if (A[j]>A[j+1]){
                int temp = A[j];
                A[j]=A[j+1];
                A[j+1] = temp;
            }
        }
    }
    for (i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl<<"Bubble sort Complexicity: "<<bubbleSortComplexity<<endl;
}

void selectionSort(int A[], int n)
{
    int i,j,minIndex,temp;
    
    for (i = 0;i<n;i++){
    	minIndex = i;
    	for (j=i+1;j<n;j++){
    		selectionSortComplexity++;
    		if (A[j]<A[minIndex]){
    			minIndex= j;
			}
		}
		temp = A[i];
		A[i] = A[minIndex];
		A[minIndex] = A[i];
	}
	 for (i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl<<"Insertion sort Complexicity: "<<bubbleSortComplexity;
}

int main()
{
    int A1[]={12,4,1,2,8,20,7};
    int A2[]={12,4,1,2,8,20,7};
    int A3[]={12,4,1,2,8,20,7,15,19,22};
    int n=7;

    bubbleSort(A1,n);
    selectionSort(A2,n);
	//return 0;
	//return 0;
}
