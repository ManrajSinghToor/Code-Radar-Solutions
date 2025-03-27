// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    fgets(str1,100,stdin,str2,100,stdin);
    // char str2[100];
    // fgets(str2,100,stdin);
    strcat(str1,str2);
    printf(str1);
}