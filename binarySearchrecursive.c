//IN BINARY SEARCH THE ARRAY SHOULD BE IN SORTED ORDER
#include <stdio.h>

int binarySearch(int arr[],int size,int element){
	int low,high,mid;
	low=0;
	high=size-1;
	while(low <= high){
		mid = (low+high)/2;
		if(arr[mid]==element){
			return mid;
		}
		if(arr[mid] < element){
			low = mid+1;
		}
		else{
			high = mid-1;
		}
	}
	return -1;
	
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int size = sizeof(arr)/sizeof(arr[0]);
	int element = 5;
	int indexSearch = binarySearch(arr,size,element); 
	printf("THE ELEMENT %d IS FOUND AT THE POSITION OR THE INDEX %d",element,indexSearch);
	return 0;
}
