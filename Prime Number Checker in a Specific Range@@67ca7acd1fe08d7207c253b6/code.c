// Your code here...
#include<stdio.h>
int isPrime(int n){
    if(n<=1){
        return 0;
    }else{
        for(int i=2;i*i<=n;i++){
            if(n % i == 0){
                return 0;
            }
        }
    }return 1;
}
int printPrimesInRange(int start,int end){
    isPrime(int n);
    for(int i = start;i<end;i++){
        printf("%d",i);
    }
}