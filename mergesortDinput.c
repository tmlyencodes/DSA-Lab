
#include <stdio.h>

#include <stdlib.h>


void merge(int arr[],int l,int r,int m){
    int i,j,k;
    int n1 = m-l+1;
    int n2 = r-m;
    int a[n1],b[n2];
    for(i=0; i<n1; i++){
        a[i] = arr[l+i];
    }
    for(j=0; j<n2; j++){
        b[i] = arr[i+1+m];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            arr[k]=a[i];
            i++;
            k++;
        }
        else{
            arr[k] = b[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k] = a[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = b[j];
        i++;
        k++;
    }
}

void mergeSort(int arr[],int l,int r){
    if(l<r){
        int m = (l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

void printArray(int A[],int size){
    int i;
    for(i=0; i<size; i++){
        printf("%d\n",A[i]);
    }
}

int main(){
    int arr[] = {5,4,3,2,1};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("Sorted Array");
    mergeSort(arr,0,arr_size-1);
    printArray(arr,arr_size);
    return 0;
    
    
}
