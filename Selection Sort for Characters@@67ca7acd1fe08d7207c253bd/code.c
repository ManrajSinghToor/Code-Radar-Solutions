// Your code here...
#include<stdio.h>
int selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int new = arr[j];
                arr[j] = arr[j+1];
                aarr[j+1] = new;
            }
        }
    }
}