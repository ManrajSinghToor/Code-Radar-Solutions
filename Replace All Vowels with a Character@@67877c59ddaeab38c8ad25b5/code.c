// Your code here...
#include <stdio.h>
#include <string.h>
int main() {
    char str[99],c;
    fgets(str,99,stdin);
    scanf("%c",&c);
    for(char i=0;str[i]!='\0';i++){
        char ch = (str[i]);
        if(ch == 'a'||ch == 'u'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'A'||ch == 'O'||ch=='I'||ch == 'E'||ch=='U'){
            ch == c;
        }
    }printf("%d",c); 
    return 0;
}