#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	float res[n];
    int temp[3];
    float p;
    float s;
    for (int i = 0; i < n; i++) {
        if (tr[i].a + tr[i].b > tr[i].c && 
            tr[i].a + tr[i].c > tr[i].b && 
            tr[i].b + tr[i].c > tr[i].a) {
            
            p = 0;
            s = 0;
            p = (tr[i].a + tr[i].b + tr[i].c) / 2.0;
            s = sqrt(p * (p - tr[i].a) * (p - tr[i].b) * (p - tr[i].c));
            res[i] = s;
        } else {
            res[i] = 0;
        }}
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (res[i]>res[j])
            {
                temp[0]=tr[i].a;
               temp[1]=tr[i].b;
                temp[2]=tr[i].c;
                tr[i].a=tr[j].a;
                tr[i].b=tr[j].b;
                tr[i].c=tr[j].c;
                tr[j].a=temp[0];
                tr[j].b=temp[1];
                tr[j].c=temp[2];
                float t=res[i];
                res[i]=res[j];
                res[j]=t;            
            }
        }
    }
}
  
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	puts("");
    for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}