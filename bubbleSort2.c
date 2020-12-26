//BUBBLE SORT IN ITERATIVE WAY
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j,n,arr[10],temp;
	printf("ENTER THE NUMBERS FOR SORTING: ");
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=n-2;i>=0;i--){
		for(j=0;j<=i;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] =temp;
			}
		}
	}
	
	printf("SORTED ARRAY IS:\n");
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
