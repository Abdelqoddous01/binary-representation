#include <stdio.h>
#include <limits.h>
#include <string.h>

int main(){
    int arr[25];
    for (int i = 0; i < 26; i++)
    {
        scanf(" %d", &arr[i]);
    }
    char word[11];
    getchar();
    scanf("%s",word);
    int max=0;
    for (int i = 0; i < strlen(word); i++)
    {
        if (arr[word[i]-'a'] >max)
        {
            max=arr[word[i]-'a'];
        }
    }
    printf("%d",strlen(word)*max);
    return 0;
}
