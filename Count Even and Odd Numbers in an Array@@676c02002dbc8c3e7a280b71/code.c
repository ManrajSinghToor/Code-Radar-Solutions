#include <stdio.h>
int eve_odd(int arr[],int n){
    int count_even;
    int count_odd;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0 || arr[i] == 10){
            count_even++;
        }else if(arr[i] % 2 != 0){
            count_odd++;
        }
    }printf("%d\n",count_odd);
    printf("%d ",count_even);
}
int main() {
    int n,arr[n];
    scanf("%d %d",&n,&arr);
    eve_odd(arr,n);
    return 0;
}