// Your code here...
#include<stdio.h>
int majority(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[j+1]){
                return arr[j-1];
                break;
            }
        }
    }return -1;
}
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    if(majority(arr,n)){
        printf("%d",majority(arr,n));
    }return -1;
}