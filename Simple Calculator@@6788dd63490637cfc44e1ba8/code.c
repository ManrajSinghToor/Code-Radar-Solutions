#include <stdio.h>
int main() {
    int a,b;
    int c;
    scanf("%d %d %c",&a,&b,&c);
    if(c == '+'){
        printf("%d",a+b);
    }else if(c == '-'){
        printf("%d",a-b);
    }else if(c == '*'){
        printf("%d",a*b);
    }else if(c == '/'){
        if (b == 0){
            printf("Error");
        }else{
        printf("%d",a/b);}}
    else{
        printf("Error");
    }return 0;
}