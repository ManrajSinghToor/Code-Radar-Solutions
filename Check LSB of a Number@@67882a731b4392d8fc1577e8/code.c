#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int c = n & 1;
    if( c == 1){
        printf("Set");}
    else if(c != 1){
        printf("Not set");
    }else {
        printf("No");
    }
     return 0;
}