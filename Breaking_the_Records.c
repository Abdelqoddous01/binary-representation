#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int* breakingRecords(int scores_count, int* scores, int* result_count) {
    int max=scores[0],min=scores[0];
    int low=0,hight=0;
    for (int i = 1; i < scores_count; i++)
    {
       if (scores[i]<min)
        {
            low++;
            min=scores[i];
        }
        if (scores[i]>max)
        {
            hight++;
            max=scores[i];
        }
    }
    result_count[0]=hight;
    result_count[1]=low;
    return result_count;
}
int main(){
    int n;
    scanf("%d",&n);
    int *arr=malloc(n*4);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int *res=malloc(8);
    breakingRecords(n,arr,res);
    printf("%d %d",res[0],res[1]);
    return 0;
}