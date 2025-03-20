// Your code here...
#include<stdio.h>
int main(){
    int n,k;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    // printf("\n");
    scanf("%d",&k);
    for(int i=0;i<n;i++){
    if(k == arr[i]){
        printf("%d",i);
    }
    // else if(k != arr[i]){
    //     printf("-1");
    //     break;
    }if(k != arr[n]){
        printf("-1");
    }
}