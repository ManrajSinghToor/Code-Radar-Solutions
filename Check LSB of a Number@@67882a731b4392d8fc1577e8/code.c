#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(int c = n & 1){
        printf("Set");
    }else{
    printf("Not Set");
}    return 0;
}