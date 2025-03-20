// Your code here...
#include<stdio.h>
int sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1] && arr[i]!=arr[j]){
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
    }for(int i=0;i<n;i++){
    if(sort(arr,n)){
        printf("%d ",arr[n-2]);
        break;
    }else{
        printf("-1");
        break;
    }
  }
}