#include <stdio.h>
int main() {
    char ch; 
    scanf("%c",&ch); 
    if(ch == 'a'||ch == 'e'||ch=='i'||ch=='o'||ch=='u'||ch == 'A'||ch == 'O'||ch == 'I'||ch == 'E'||ch=='U'){
        printf("Vowel");
    }else if(ch == '1'||ch == '2'||ch=='3'||ch=='4'||ch =='5'||ch == '6'||ch == '7'||ch == '8'||ch == '9'||ch == '0'){
        printf("Digit");
    }else if(ch == '*'||ch=='%'||ch =='@'||ch =='!'||ch == '&'||ch == '$'||ch == '#'){
        printf("Special Character");
    }else{
        printf("Consonant");
    }return 0;
}