#include <stdio.h>
#include <string.h>
int main(){
    int n;
    printf("Enter the number of numbers that you want to sort :");
    scanf("%d",&n);
    int arr[n];
    printf("enter the %d numbers :",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int min;
    int len =sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            if (arr[i]>arr[j])
            {
                min=arr[j];
                arr[j]=arr[i];
                arr[i]=min;
            }
        }
    }
    for (int k = 0; k < len; k++)
    {
        printf("%d ",arr[k]);
    } 
    return 0;
}