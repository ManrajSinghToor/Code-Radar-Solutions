// Your code here...
#include<stdio.h>
int srt(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1] && arr[j] == 0){
                int new = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = new;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<=n;i++){
        scanf("%d ",&arr[i]);
    }if(srt(arr,n)){
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    }
}