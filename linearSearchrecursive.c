//IN THE LINEAR SEARCH THE ARRAY MAY BE SORTED OR UNSORTED IT WORKS ON BOTH WHILE IN THE BINARY SEARCH 
//IT TAKES ONLY THE SORTED ARRAY.

#include <stdio.h>

int linearSearch(int arr[],int size,int element){
	int i;
	for(i=0;i<size;i++){
		if(arr[i] == element){
			return i;
		}
	}
	return -1;
}

int main(){
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int element =3;
	int indexSearch = linearSearch(arr,size,element);
	printf("The element %d is found at %d ",element,indexSearch);
	return 0;
}
