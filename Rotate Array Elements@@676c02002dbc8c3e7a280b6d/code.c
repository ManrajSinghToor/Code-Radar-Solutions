// Your code here...
#include<stdio.h>
void srtarr(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j] > arr[j+1]){
                int swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 1;i < n;i++){
        scanf("%d",&arr[i]);
    }srtarr(arr , n);
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }return 0;
}