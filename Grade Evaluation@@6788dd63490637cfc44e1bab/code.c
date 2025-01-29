#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);

    if(ch == 'A'){
        printf("Excellent\n");
    }
    else if(ch == 'B'){
        printf("Good\n");
    }else if(ch =='C'){
        printf("Average\n");
    }else if(ch == 'D'){
        printf("Below Average\n");
    }else{
        printf("Fail\n");
    }
    return 0;
}