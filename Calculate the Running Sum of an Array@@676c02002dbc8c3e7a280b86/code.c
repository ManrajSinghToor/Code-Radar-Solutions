// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int k = 0;
    int arr[k] = 0;
    for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);  
    }
    for(int i=0;i<n;i++){
        arr[k] += arr[i];
        printf("%d ",arr[k]);
    }return 0;
}