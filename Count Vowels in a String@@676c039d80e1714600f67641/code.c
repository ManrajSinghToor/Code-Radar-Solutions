#include <stdio.h>
#include <string.h>
int main() {
    char str[99];
    fgets(str,99,stdin);
    int count = 0;
    for(char i=0;str[i]!='\0';i++){
        char ch = (str[i]);
        if(ch == 'a'||ch == 'u'||ch == 'e'||ch == 'i'||ch == 'o'){
            count++;
        }
    }printf("%d",count); 
    return 0;
}