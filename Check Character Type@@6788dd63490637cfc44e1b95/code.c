#include <stdio.h>
int main() {
    char ch; 
    scanf("%c",&ch);   
    if(ch == "aeiou"){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
    return 0;
}