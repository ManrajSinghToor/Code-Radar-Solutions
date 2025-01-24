#include <stdio.h>
int main() {
    char str1[100];
    int age;
    char str2[100];
    scanf("%s %d %s",&str1,&age,&str2);
    printf("Name: %s\nAge: %d\nHobby: %s\n",str1,age,str2);
    return 0;
}