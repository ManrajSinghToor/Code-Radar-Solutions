#include<stdio.h>
int target(int n,int arr[],int k){
  for(int i=0;i<n;i++){
    if(arr[i] == k){
      return i;
    }else{
      printf("-1");
      break;
  }
 }
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