#include<stdio.h>
int facto(int n) {
    if(n<1){
        return 1;
    }else if(n<0){
        printf("Invalid range");
    }else{
        return n*facto(n-1);
    }
}

int factorialRange(int start,int end){
    for(int i=start;i<=end;i++){
        if(facto(i)){
            printf("%d\n",facto(i));
        }
    }
}