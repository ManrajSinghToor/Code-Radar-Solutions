// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d ",&n);
    int k;
    scanf("%d\n",&k);
    int arr[n];
    for(int i=0;i<=n;i++){
        scanf("%d ",&arr[i]);
    }int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            count++;
        }
    }printf("%d ",count);
}