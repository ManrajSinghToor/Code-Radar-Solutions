#include<stdio.h>
int target(int n,int arr[],int k){
  int index = -1;
  for(int i=0;i<n;i++){
    if(arr[i] == k){
      index = i;
    }else{
      printf("-1");
      break;
  }
 }printf("%d",index);
}
int main(){
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }int k;
  scanf("%d",&k);
  target(n,arr,k);
}