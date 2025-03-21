// Your code here...
#include <stdio.h>
#include <string.h>
int main() {
    char str[99];
    fgets(str,99,stdin);
    char count = '*';
    for(char i=0;str[i]!='\0';i++){
        char ch = (str[i]);
        if(ch == 'a'||ch == 'u'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'A'||ch == 'O'||ch=='I'||ch == 'E'||ch=='U'){
            ch == count;
        }
    }printf("%d",ch); 
    return 0;
}