#include <stdio.h>
typedef struct {
    int a;
    int b;
} dlq;
int main()
{
    dlq c[101]={};
    int n;
    dlq tem;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d %d",&c[i].a,&c[i].b);
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(c[j].a > c[j+1].a) {
                tem = c[j];
                c[j] = c[j+1];
                c[j+1] = tem;
            }
        }
    }
    for(int i=1;i<=n;i++) {
        printf("%d %d\n",c[i].a,c[i].b);
    }
    return 0;
}