//IMPLEMENTATION OF BUBBLE SORT IN AN 1D ARRAY
#include <stdio.h>
#include <stdlib.h>

void swap(int *x,int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp; 
}

void bubbleSort(int arr[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}

void printArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d\n",arr[i]); 
	}
}

int main(){
	int arr[] = {1,2,3,4,5,9,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,n);
	printf("********SORTED ARRAY IS:**********\n");
	printArray(arr,n);
	return 0;
	
}
