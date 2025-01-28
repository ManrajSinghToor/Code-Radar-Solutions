#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(c == '+'){
        printf("%c",a+b);
    }else if(c == '-'){
        printf("%c",a-b);
    }else if(c == '*'){
        printf("%c",a*b);
    }else if(c == '/'){
        if (b == 0){
            printf("Error");
        }else{
        printf("%c",a/b);}}
    else{
        printf("Error");
    }return 0;
}