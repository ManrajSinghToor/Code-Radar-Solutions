#include<stdio.h>
int facto(int n) {
    if(n<0){
        printf("Invalid range");
    }
    else if(n<1){
        printf("1");
    }else{
        printf("%d",n*facto(n-1));
    }
}

int factorialRange(int start,int end){
    for(int i=start;i<=end;i++){
        if(facto(i)){
            facto(i);
        }
    }
}