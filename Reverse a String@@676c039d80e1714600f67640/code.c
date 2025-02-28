#include <stdio.h>

int main() {
    int n;
    char st[n];
    scanf("%s",&st);
    for(int i=0;i<'\0';i++){
    int first = st[i];
    int second = st[n-i-1];
    int third = first;
    first = second;
    second = third;
        }for(int i=0;i<n;i++){
        printf("%d",st[i]);
    }

    return 0;
}