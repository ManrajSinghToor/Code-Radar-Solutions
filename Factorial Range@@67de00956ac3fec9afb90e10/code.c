#include<stdio.h>
int fact(int n){
    if(n<1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}
int factorialRange(int start,int end){
    int var = 0;
    for(int i=start;i<end;i++){
        if(fact(i)){
            printf("%d",i);
            var = 1
        }
    }if(!var){
        printf()
    }
}