//INSERTION SORT IN RECURSIVE WAY
/* Insertion Sort:- Find the minimum element in an unsorted array and swap it with the beginnning element*/

#include <stdio.h>
//#include <stdlib.h>
//#include <limits.h>
void swap(int *x, int *y){
	int temp;
	temp = *x ;
	*x = *y;
	*y = temp;
}

void selectionSort(int arr[],int n){
	int i,j,min_ele;
	for(i=0 ; i < n-1 ; i++){
		min_ele = i;
		for(j=i+1 ; j < n ; j++){
			if(arr[j]<arr[min_ele]){
				min_ele = j;
			}
			//swap(&arr[j],&arr[min_ele]);
			swap(&arr[min_ele],&arr[j]);
		}
	}
}

void displayArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}
}

int main(){
	int arr[] = {5,4,3,2,1,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr,n);
	printf("Sorted array is:\n");
	//selectionSort(arr,n);
	displayArray(arr,n);
	printf("*********END OF SELECTION SORT*********");
	return 0;
}
