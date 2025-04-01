// Your code here...
#include<stdio.h>
int rotate(int arr[],int n,int k){
    int temp[n];
    for(int i=0;i<n;i++){
        temp[(i+k)%n] = arr[i];
    }for(int j=0;j<n;j++){
        arr[j] = temp[j];
    }
}
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    printf("%d",rotate(arr,n,k));
}