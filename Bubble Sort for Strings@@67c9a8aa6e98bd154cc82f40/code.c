// Your code here...
#include<stdio.h>
#include<string.h>
int bubbleSort(char *arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(strcmp(arr[j],arr[j+1])>0){
                char *new = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = new;
            }
        }
    }
}
char printArray(char *arr[],int n){
    for(int i=0;i<=n;i++){
        printf("%s ",arr[i]);
    }
}