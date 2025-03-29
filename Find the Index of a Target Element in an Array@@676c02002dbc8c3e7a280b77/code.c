#include<stdio.h>
int main(){
  int n,k;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }scanf("%d",&k);
  int index = -1;
  for(int i=0;i<n;i++){
    if(arr[i] == k){
      index = i;
      break;
    }else{
      printf("-1");
      break;
    }
  }printf("%d",index);
}