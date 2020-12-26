#include <stdio.h>

int main(){
	int n,i,j,temp,arr[10];
	printf("Enter the elements to make an array:\n");
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d\n",&arr[i]);
	}
	
	for(i=0; i<=n; i++){
		j=i;
		while(j>=0 && arr[j-1]>arr[j]){
			temp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = temp;
			j--;
		}
	}
	printf("Sorted Array is:\n");
	for(i=0;i<=n;i++){
		printf("%d\n",arr[i]);
	}
	printf("Thank You");
	return 0;
}
