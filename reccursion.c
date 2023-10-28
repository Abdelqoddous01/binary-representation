#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int rec(int n, int a, int b, int c) { 
    
    if (n==3){
        return c;
    }
    else if (n==2){
        return b;
    }
    else if (n==1){
        return a;
    }
    else{
        return rec(n-1,a,b,c) +rec(n-2,a,b,c) + rec(n-3,a,b,c);
    }
    return 0;
}

int main() {
    int n = 3, a = 4, b = 6, c = 8;
    int res = rec(n, a, b, c);
    printf("%d", res);
    return 0;
}
