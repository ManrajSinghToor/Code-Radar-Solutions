// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<=n;i++){
        scanf("%d ",&arr);
    }for(int i=0;i<n/2;i++){
        printf("%d",arr[i-3]);
    }return 0; 
}