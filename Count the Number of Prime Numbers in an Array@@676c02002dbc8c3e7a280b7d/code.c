#include<stdio.h>
int prime(int arr[],int n){
    int count = 0;
    if(n<=1){
        return 0;
    }for(int i=2;i*i<n;i++){
        count++;
    }printf("%d",count);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }prime(arr,n);
}