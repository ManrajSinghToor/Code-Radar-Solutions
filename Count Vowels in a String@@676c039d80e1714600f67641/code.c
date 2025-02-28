#include <stdio.h>
#include <string.h>
int main() {
    char str[99];
    fgets(str,99,stdin);
    int count = 0;
    if(str == 'A'||str == 'E'||str == 'I'||str == 'O'||str == 'U'){
        count++;
    }else if(str == 'a'||str == 'e'||str == 'o'||str == 'i'||str == 'u'){
        count++;
    }else{
        printf("Invalid");
    }printf("%d",count);
    return 0;
}