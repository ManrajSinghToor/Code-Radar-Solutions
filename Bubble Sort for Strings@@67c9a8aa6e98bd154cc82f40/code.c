// Your code here...
#include<stdio.h>
#include<string.h>
char bubbleSort(char* arr[],int n){
    for(int i=0;i<n-1;i++){
        for(char j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                char new = *arr[j];
                arr[j] = *arr[j+1];
                arr[j+1] = new;
            }
        }
    }
}
char printArray(char* arr[],int n){
    for(int i=0;i<=n;i++){
        printf("%s ",arr[i]);
    }
}