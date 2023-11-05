#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int *colors=calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int res,count=0;
    for (int z = 0; z < n; z++)
    {
        
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0;  j< n; j++)
        {
            if (arr[i]!=colors[j])
            {
                res=1;
            }
            else{
                res=0;
                break;
            }
        }
        if (res==1)
        {
            colors[z]=arr[i];
            break;
        }
    }
    }
    int k=0;
    while (colors[k]!=0)
    {
        count++;
        k++;
    }
    colors=realloc(colors,count*sizeof(int));
    int *final=calloc(count,sizeof(int));
    for (int i = 0; i < count; i++)
    {
        for (int k = 0; k < n; k++)
        {
            if (arr[k]==colors[i])
            {
                final[i]++;
            }
        }
    }
    int numofpairs=0;
    for (int i = 0; i < count; i++)
    {
        if (final[i]%2==0)
        {
            numofpairs+=(final[i]/2);
        }
        else{
            numofpairs+=((final[i]-1)/2);
        }
    }
    printf("%d",numofpairs);
    free(colors);
    free(final);
    return 0;
}