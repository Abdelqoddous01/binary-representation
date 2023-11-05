#include <stdio.h>
#include <stdlib.h>

void libraryfine(int d1,int m1,int y1,int d2,int m2,int y2,int *fine){
    if ((y2>y1) || (y1==y2 && m2>m1) || (y1==y2 && m1==m2 && d2>d1) || (y1==y2 && m1==m2 && d1==d2))
    {
        *fine=0;
    }
    else if (y1==y1 && m1==m2 & d1!=d2) 
    {
        *fine=15*(d1-d2);
    }
    else if(y1==y2 && m1!=m2){
        *fine=500*(m1-m2);
    }
    else if (y1>y2)
    {
        *fine=10000;
    }    
}

int main(){
    int d1,m1,y1,d2,m2,y2;
    scanf("%d%d%d%d%d%d",&d1,&m1,&y1,&d2,&m2,&y2);
    int x=0;
    int *p;
    p=&x;
    libraryfine(d1,m1,y1,d2,m2,y2,p);
    printf("%d",*p);
    return 0;
}