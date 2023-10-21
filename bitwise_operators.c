#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main() {

    int n;
    int k;
    long max1=0,max2=0,max3=0;
    scanf("%d%d", &n, &k);
    int x=0;
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            long and,or,xor;
            and=i&j;
            or=i|j;
            xor=i^j;
            if (and>max1 && and<k)
            {
                max1=and;
            }
            if (or>max2 && or<k)
            {
                max2=or;
            }
            if (xor>max3 && xor<k)
            {
                max3=xor;
            }   
        }
    }
    printf("%d\n",max1);
    printf("%d\n",max2);
    printf("%d\n",max3);
    return 0;
}
