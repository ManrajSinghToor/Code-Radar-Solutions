#include<stdio.h>
int fact(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int factorialRange(int start,int end){
    int var = 0;
    for(int i=start;i<end;i++){
        if(fact(i)){
            printf("%d\n",i);
            var = 1;
        }
    }if(!var){
        printf("-1");
    }
}