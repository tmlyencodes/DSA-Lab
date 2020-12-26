#include <stdio.h>

int main(){
	int i,arr[10],n,element;
	printf("ENTER THE NUMBER OF ELEMENTS:");
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d\n",&arr[i]);
	}
	printf("ENTER THE ELEMENT TO BE FOUND IN THE ARRAY");
	scanf("%d\n",&element);
	for(i=0;i<9;i++){
		if( arr[i] == element){
			return i;
		}
	}
	return -1;
}
