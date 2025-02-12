#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n == 0|| n ==1){
        return false;
    }for(int i = 2;i*i <= n;i++){
        if(n % i == 0){
        printf("Prime");}
    }
    return true;

    return 0;
}