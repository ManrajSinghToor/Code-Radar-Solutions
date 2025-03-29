// Your code here...
#include<stdio.h>
int replace(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                int new = arr[j];
                arr[j] = arr[j+1];
                arr[j] = -1;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[];
    for(int i=0;i<n;i++){
        scanf("%d",&arr);
    }
    replace(arr,n);
    return 0;
}