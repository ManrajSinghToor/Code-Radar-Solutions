// Your code here...
#include<stdio.h>
int freq(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            if(arr[i]==arr[i+1]){
                printf("%d",arr[i]);
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    freq(arr,n);
}