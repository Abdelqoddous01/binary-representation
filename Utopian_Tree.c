#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int x[n],max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
        if (x[i]>max)
        {
            max=x[i];
        }
    }
    
    int arr[max+1];
    for ( int i = 0; i <= max; i++)
    {
        if (i%2==0)
        {
            if (i==0){
            arr[i]=i+1;
            }
            else{
                arr[i]=arr[i-1]+1;
            }
        }
        else{
            arr[i]=arr[i-1]*2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[x[i]]);
    }
    return 0;
}