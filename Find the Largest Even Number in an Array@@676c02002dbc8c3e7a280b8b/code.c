// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    scanf("%d ",&arr);
    for(int i = 0;i<=n;i++){
    if(arr[i]>arr[i+1] && arr[i] % 2 == 0){
        printf("%d ",i);
    }else{
        printf("-1");
    }
  }
}