// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<=n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int count = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
                // arr[j] = -1;
            }
        }if(arr[i] != -1){
            printf("%d %d\n",arr[i],count);
        }
    }
}