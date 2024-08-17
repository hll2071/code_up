#include <stdio.h>
int main() 
{
    int n,m,sum = 1, t=1;
    int a[101][101]= {};
    scanf("%d %d",&n,&m);
    for(int i=m;i>0;i--) {
        if(t%2==0) {
            for(int j=1;j<=n;j++) {
                a[j][i] = sum;
                sum++;
            }
        }
        else {
            for(int j=n;j>0;j--) {
                a[j][i] = sum;
                sum++;
            }
        }
        t++;
    }
    
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
