#include<stdio.h>
int prime(int arr[],int n){
    int count = 0;
    if(n<=1){
        return 0;
    }for(int j=2;j*j<n/2;j++){
        if(n % j == 0){
            return 0;
        }
    }return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }int count = 0;
    for(int i=0;i<n;i++){
        if(prime(arr,n)){
            count++;
        }else{
            printf("-1");
        }
    }printf("%d",count);
}