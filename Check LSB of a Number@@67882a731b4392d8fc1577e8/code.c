#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int c = n & 1;
    if( c == 1){
    printf("Set");}
    else{
        printf("Not set");
    }
     return 0;
}