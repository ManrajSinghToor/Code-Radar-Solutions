#include <stdio.h>
int prime(int n){
    if(n<=1){
        return False;
    }for(int i=2;i*i<=n;i++){
        if(n % i == 0){
        return False;
        }
    }return True;
}
int main() {
    int num;
    scanf("%d",&num);
    if(prime == num){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}