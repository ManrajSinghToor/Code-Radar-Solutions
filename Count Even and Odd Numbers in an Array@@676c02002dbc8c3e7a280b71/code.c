#include <stdio.h>
int main() {
    int n,arr[];
    scanf("%d %d",&n,&arr);
    int count_even;
    int count_odd;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0){
            count_even++;
        }else if(arr[i] % 2 != 0){
            count_odd++;
        }
    }printf("%d ",count_even);
     printf("%d ",count_odd);
    return 0;
}