// Your code here...
#include<stdio.h>
int check(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1] && arr[i] % 2 ==0){
            return 0;   
        }
    }
}
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<=n;i++){
        scanf("%d ",&arr[i]);
    }if(check(arr,n)){
        printf("%d ",i);
    }
}