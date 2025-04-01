#include<stdio.h>
int fact(int n){
    if(n<1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}
int factorialRange(int start,int end){
    for(int i=start;i<=end;i++){
        if(fact(i)){
            printf("%d",fact(i));
        }else if(start<0 && start > end){
            printf("Invalid range");
        }
    }
}