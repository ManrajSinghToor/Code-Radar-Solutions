// Your code here...
#include<stdio.h>
int maxarr(int arr[],int n){
    for (int i = 1; i <= n-1; i++) {
        if (arr[i] > arr[i+1]) {
            return 0;
        }
    }
    return  1;
}
int main(){
    int n;
    int i=0
    scanf("%d\n",&n);
    int arr[n];
    for(int i =1;i<n+1;i++){
        scanf("%d ",&arr);
    }
    maxarr(arr,n);
    printf("%d %d",arr[i+1]-arr[i],arr[i+3]-arr[i+2]);
}