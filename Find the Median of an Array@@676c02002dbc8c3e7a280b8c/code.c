// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    int median = 0;
    for(int i=0;i<=n;i++){
        scanf("%d ",&arr);
    }for(int i=0;i<n+1;i++){
       median = arr[i]+arr[i+1]; 
       i++;
    }printf("%d",median);
    return 0; 
}