#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            for(char k ='A';k<=(char)i+64;k++){
                printf("%c ",k);
            }printf("\n");
    }
    return 0;
}