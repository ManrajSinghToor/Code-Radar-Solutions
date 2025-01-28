#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>=1 && a<=100){
        printf("In Range");
    }else if(a==0 || a==101){
        printf("Out of Range");
    }else{
        printf("Nothing")
    }
    return 0;
}