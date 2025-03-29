// Your code here...
#include<stdio.h>
int insertionSort(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(strcmp(arr[j],arr[j+1])>0){
                char new[100];
                strcpy(new,arr[j]);
                strcpy(arr[j],arr[j+1]);
                strcpy(arr[j+1],new);
            }
        }
    }
}
int printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}