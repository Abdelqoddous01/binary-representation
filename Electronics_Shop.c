#include <stdio.h>

int main(){
    int b,n,m;
    scanf("%d%d%d",&b,&n,&m);
    int ak[n],au[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ak[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&au[i]);
    }
    int max=-1;
    for (int i = 0; i < n; i++){
    
        for (int j = 0; j < m; j++)
        {
            if (ak[i]+au[j]>max && ak[i]+au[j]<=b)
            {
                max=ak[i]+au[j];
            }
        }
    }
    printf("%d",max);
    return 0;
}
