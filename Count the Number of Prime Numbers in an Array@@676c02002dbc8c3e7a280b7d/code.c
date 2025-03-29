#include<stdio.h>
int prime(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
    if(n<=1){
        return 0;
    }for(int j=2;j*j<n/2;j++){
        if(n % j == 0){
            count++;
        }}
    }printf("%d",count);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}