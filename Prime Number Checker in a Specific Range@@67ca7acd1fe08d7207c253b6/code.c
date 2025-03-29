// Your code here...
#include<stdio.h>
int printPrimesInRange(int start,int end){
    if(start<=1){
        return 0;
    }else{
        for(int i=start;i*i<=end;i++){
            if(end % i == 0){
                return 0;
            }
        }
    }return 1;
}