// Your code here..
#include<stdio.h>
int main(){
    int n;
    int k = 0;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1] && arr[i]!= arr[i+1]){
            printf("%d\n",arr[i]);
            k++;
            break;
        }
        }if(k == 0){
            printf("%d",n);
        }
return 0;
}