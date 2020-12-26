#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int selectionSort(int arr[],int n){
	int i,j,key;
	for(i=0;i<n;i++){
		key = arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
	}
}


void printArray(int arr[],int size){
	int i=0;
	for(i=0;i < size;i++){
		printf("%d\n",arr[i]);
	}
}

int main(){
	int arr[] = {5,4,3,2,1,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr,n);
	printArray(arr,n);
	return 0;
}

