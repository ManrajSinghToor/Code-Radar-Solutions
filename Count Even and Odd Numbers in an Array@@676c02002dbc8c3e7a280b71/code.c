#include <stdio.h>
int main(){
    int n,arr[n];
    scanf("%d %d",&n,&arr);
    int count_even;
    int count_odd;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0 || arr[i] == 10){
            count_even++;
        }else{
            count_odd++;
        }
    }printf("%d ",count_even);
    printf("%d\n",count_odd);
    return 0;
}