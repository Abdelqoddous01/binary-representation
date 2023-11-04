#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int receive=5;
    int res=0;
    for (int i = 0; i < n; i++)
    {
        res+=(receive/2);
        receive=(receive/2)*3;
    }
    printf("%d",res);
}