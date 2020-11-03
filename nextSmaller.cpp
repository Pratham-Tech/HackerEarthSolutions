 #include<iostream>
#include<conio.h>
using namespace std;
	
int findSmallest(int arr[], int element, int start, int end){

	int smallestIndex=0;

	for (int i=start; i<end; i++){

		if(arr[i+1]<element){
			
			if(i==end-1)
				smallestIndex = -1;
			else{	
				smallestIndex = i+1;
				break;
			}
		}
		else
			smallestIndex = -1;
	}

	return smallestIndex;
}

int findGreatest(int arr[], int start, int end){

	int greatest=0;

	for (int i=start; i<end; i++){

		if(arr[i+1]>arr[i]){
			
			if(i==end-1)
				greatest = -1;
			else{
				greatest = arr[i+1];
				break;
			}
		}
		else
			greatest = -1;
	}

	return greatest;
}

int main(){

	int n=10, arr[10] = {5,1,9,2,5,1,7,8,1,10},Outarr[n];
	int smallestIndex=0, j, greatest=0;
	
	for(int i=0; i<n; i++,j++)
		Outarr[i] = 0;

	for (int i=0; i<n; i++){

		j=i;
		smallestIndex = findSmallest(arr, arr[i], i, n);
		
		if(smallestIndex == -1)
			Outarr[j] = -1;
		
		else{
			greatest = findGreatest(arr, smallestIndex, n);
			Outarr[j] = greatest;
		}
	}

	for (int i=0; i<n; i++)
		cout<<Outarr[i]<<" ";

	return 0;	
}