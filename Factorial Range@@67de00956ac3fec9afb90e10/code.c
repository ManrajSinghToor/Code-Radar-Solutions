#include<stdio.h>
int facto(int n) {
    if(n<1){
        return 1;
    }else{
        return n*facto(n-1);
    }
}

int factorialRange(int start,int end){
    for(int i=start;i<=end;i++){
        if(start > 0 || start < end){
            printf("%d\n",facto(i));
        }else if(start==0){
            printf("1");
        }else{
            printf("Invalid range");
            break;
        }
    }
}