#include<stdio.h>
int dup(int arr[],int n){
    for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                printf("%d",arr[i]);
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