#include <stdio.h>
int main() {
    unsigned int n;
    scanf("%u",&n);
    if(!(n & 1)){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}