#include <stdio.h>

int main(){
    int v1,v2,p1,p2;
    int i=0,res=0;
    int max;
    scanf("%d%d%d%d",&p1,&v1,&p2,&v2);
    if (p1<p2 && v1<v2)
    {
        printf("NO");
    }
    else{
        if (p1>=p2)
        {
            max=p1;
        }
        else{
            max=p2;
        }
        while (i<max){
            p1+=v1;
            p2+=v2;
            if (p1==p2)
            {
                res=1;
                break;
            }
            i++;
        }
        if (res==1)
        {
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}