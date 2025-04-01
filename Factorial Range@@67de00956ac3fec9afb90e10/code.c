#include<stdio.h>
int facto(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact ==i*facto(i-1);
    }
    return fact;
}

int factorialRange(int start,int end){
    for(int i=start;i<end;i++){
        if(facto(i)){
            printf("%d\n",facto(i));
        }
    }
}