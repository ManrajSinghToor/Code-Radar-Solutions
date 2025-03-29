#include<stdio.h>
int dup(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=1;j<i+1;j++){
            if(arr[j]==arr[j+1]){
                printf("%d",arr[j]);
            }
        }
    }
}
int main(){
    int n;
    scanf("%d ",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    dup(arr,n);
}