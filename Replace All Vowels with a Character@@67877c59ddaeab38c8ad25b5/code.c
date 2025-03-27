// Your code here...
#include <stdio.h>
#include <string.h>
int main() {
    char str[99],c;
    fgets(str,99,stdin);
    scanf("%c",&c);
    char ch;
    for(char i=0;str[i]!='\0';i++){
        if(i == 'a'||str == 'u'||str == 'e'||str == 'i'||str == 'o'||str == 'A'||str == 'O'||str =='I'||str == 'E'||str == 'U'){
            ch == c;
            printf("%d",ch);
        }
    } 
    return 0;
}