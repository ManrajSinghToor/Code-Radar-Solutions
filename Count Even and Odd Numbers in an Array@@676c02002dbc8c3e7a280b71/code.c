#include <stdio.h>
int main(){
    int n,arr[n];
    scanf("%d %d",&n,&arr);
    int count_even=0;
    int count_odd=0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0 || arr[i] == 10 ||arr[i] == 0){
            count_even++;
        }else if(arr[i] % 2 != 0){
            count_odd++;
        }else{
            printf("");
        }
    }printf("%d ",count_even);
    printf("%d\n",count_odd);
    return 0;
}