#include <stdio.h>

int main(){
	int i,j,n,temp,arr[20];
	printf("Enter the elements to make the array");
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d\n",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=i+1;j<=n;j++){
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	printf("Sorted Array is:\n");
	for(i=0;i<=n;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
