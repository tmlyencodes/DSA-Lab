#include <stdio.h>
#include <stdlib.h>

void merge(int arr[],int l,int r,int m){
	int i,j,k;
	int n1 = m-l+1;
	int n2 = r-m;
	int L[n1],R[n2];
	for(i=0;i<n1;i++){
		L[n1] = arr[l+1];
	}
	for(j=0;j<n2;j++){
		R[n2] = arr[m+l+1];
	}
	i=0;
	j=0;
	k=l;
	while((i<n1) && (j<n2)){
		if(L[n1] <= R[n2]){
			arr[k] = L[i];
			i++;
			k++;
		}
		else{
			arr[k] = R[j];
			j++;
		}
		k++;
		while(i < n1){
			arr[k] = L[i];
			i++;
			k++;
		}
		while(j < n2){
			arr[k] = R[j];
			j++;
			k++;
		}
	}
}

void mergeSort(int arr[],int l,int r){
	int mid;
	if(l<r){
		mid = (l+r)/2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,r);
		merge(arr,l,mid,r);
	}
}

void printArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}
}

int main(){
	int arr[] = {5,4,3,2,1,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	//printf("GIVEN ARRAY :\n");
	//printArray(arr,n);
	printf("-------------------------------------------\n");
	mergeSort(arr,0,n-1);
	printf("THE SORTED ARRAY IS:\n");
	//mergeSort(arr,0,n-1);
	printArray(arr,n);
	return 0;
}
