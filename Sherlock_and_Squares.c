#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int j=1;
    int *res=calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        for ( j=sqrt(arr[i][0]) ; j <= sqrt(arr[i][1]); j++)
        {
            if (j*j>=arr[i][0] && j*j<=arr[i][1])
            {
                res[i]+=1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",res[i]);
    }
    free(res);
    return 0;
}