#include <stdio.h>
int main() {
    int a,b;
    int c;
    scanf("%d %d",&a,&b);
    c = b;
    b = a;
    c = a;
    printf("%d %d",a,b);
    return 0;
}