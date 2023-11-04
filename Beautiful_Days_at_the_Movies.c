#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int reverse_num(int n,int *new){
    int temp=n,count=0;
    while (temp>0)
    {
        temp/=10;
        count++;
    }
    int store=count;
    int rev[count];
    for (int i = 0; i < count; i++)
    {   
        rev[i]=(n%10)*pow(10,store-1);
        n/=10;
        store--;
    }
    for (int i = 0; i < count; i++)
    {
        *new+=rev[i];
    }
    return *new;    
}


int main(){
    int n1,n2,max,min,k;
    scanf("%d%d%d",&n1,&n2,&k);
    if (n1>n2)
    {
        max=n1;
        min=n2;
    }
    else{
        max=n2;
        min=n1;
    }
    int count=0;
    for (int i =min ; i <= max; i++)
    {
        int new=0;
        reverse_num(i,&new);
        if (abs(new-i)%k==0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}