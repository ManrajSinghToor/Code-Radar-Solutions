#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if( n & 1 == 1){
        printf("Set");}
    else if(n & 1 != 1){
        printf("Not set");
    }else {
        printf("No");
    }
     return 0;
}