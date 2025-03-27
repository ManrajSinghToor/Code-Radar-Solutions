// Your code here...
#include <stdio.h>
#include <string.h>
int main() {
    char str[99],c;
    fgets(str,99,stdin);
    scanf("%c",&c);
    char ch;
    for(char i=0;str[i]!='\0';i++){
        if(i == 'a'||i == 'u'||i == 'e'||i == 'i'||i == 'o'||i == 'A'||i == 'O'||i =='I'||i == 'E'||i == 'U'){
            ch == c;
            printf("%d",ch);
        }
    } 
    return 0;
}