#include <stdio.h>
int main() {
    unsigned int n;
    scanf("%u",&n);
    if(n & 1){
        printf("Not Set");
    }else{
        printf("Set");
    }
    return 0;
}