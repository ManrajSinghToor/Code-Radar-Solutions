// Your code here...
#include<stdio.h>
int isPrime(int start,int end){
    if(start<=1 || end <=1){
        return 0;
    }else{
        for(int i=start;i<=end/2;i++){
            if(end % i == 0){
                return 0;
            }
        }
    }return 1;
}
int printPrimesInRange(int start,int end){
    isPrime(start,end);
    for(int i = start;i<end;i++){
        return i;
    }
}