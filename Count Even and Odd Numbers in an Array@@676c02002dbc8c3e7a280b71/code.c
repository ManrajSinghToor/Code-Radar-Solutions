#include <stdio.h>
int main() {
    int n,arr[];
    scanf("%d %d",&n,&arr);
    for(int i=0;i<=n;i++){
        if(arr[i]%2 == 0){
            printf("%d ",arr[i]);
        }else{
            printf("%d ",arr[i])
        }printf("\n")
    }
    return 0;
}