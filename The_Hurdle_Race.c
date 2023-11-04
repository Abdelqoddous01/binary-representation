#include <stdio.h>
#include <limits.h>

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int max=INT_MIN;
    int x;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x);
        if (x>max)
        {
            max=x;
        }
    }
    if (max-k>0)
    {
        printf("%d",max-k);
    }
    else{
        printf("0");
    }
    return 0;
}
