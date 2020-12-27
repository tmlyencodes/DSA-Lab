#include <stdio.h>

void merge(int arr[],int ,int,int);
void mergeSort(int[], int, int);

int main(){
	int n,i,arr[10];
	printf("Enter the elements to be sorted in this array");
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d\n",&arr[i]);
	}
	mergeSort(arr,0,n-1);
	printf("MERGE SORT HAPPENS THEN:\n");
	for(i=0;i<=n;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}

void merge(int arr[],int low,int high,int mid){
	int i,k,mi,lo,a[10];
	lo = low;
	mi = mid;
	i = low;
	
	while((low<=mid) && (mi<=high)){
		if(arr[low]<=arr[mi]){
			a[i] = arr[lo];
			lo++;
		}
		else{
			a[i] = arr[mi];
			mi++;
		}
		i++;
	}
	if(lo<mid){
		for(k=mi;k<=high;k++){
			a[i] = arr[k];
			i++;
		}
	}
	else{
		for(k=lo;k<=mid;k++){
			a[i] = arr[k];
			i++;
		}
	}
	for(k=low;k<=high;k++){
		a[k] = arr[k];
	}
}
void mergeSort(int arr[],int low,int high){
	int mid;
	if(low<high){
		mid = (low+high)/2;
		mergeSort(arr,low,mid);
		mergeSort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}	
}
