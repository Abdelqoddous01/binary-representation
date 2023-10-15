#include <stdio.h>

int main(){
    char s[100];
    fgets(s,100,stdin);
    puts("Hello, World!");
    printf("%s",s);
    return 0;
}