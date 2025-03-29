// Your code here...
#include<stdio.h>
int insertionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int new = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = new;
            }
        }
    }
}
int printArray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
}