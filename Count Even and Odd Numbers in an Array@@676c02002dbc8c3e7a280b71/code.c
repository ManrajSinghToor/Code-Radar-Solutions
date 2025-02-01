#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i])
    }
    int count_even;
    int count_odd;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0){
            count_even++;
        }else{
            count_odd++;
        }
    }printf("%d ",count_even);
     printf("%d ",count_odd);
    return 0;
}