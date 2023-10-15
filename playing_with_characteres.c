#include <stdio.h>

int main(){
    char c;
    char s[100];
    char sen[100];
    scanf("%c",&c);
    scanf("%s",&s);
    scanf("\n");
    fgets(sen,100,stdin);
    printf("%c\n%s\n%s\n",c,s,sen);
    return 0;
}