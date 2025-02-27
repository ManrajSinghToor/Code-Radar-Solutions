// Your code here...
#include<stdio.h>
int sotarr(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        if(arr[i] > arr[i+1]){
            return 0;
        }
    }return 1;
}
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=1;i<n+1;i++){
        scanf("%d ",&arr);
    }sotarr(arr,n);
     printf("%d",arr[n-3]);
}