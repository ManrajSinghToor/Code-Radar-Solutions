// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int k = 0;
    for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);  
    }
    for(int i=0;i<n;i++){
        k += arr[i];
        printf("%d ",k);
    }return 0;
}