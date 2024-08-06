#include <stdio.h>
int main()
{
    int a[1001] = {};
    int b,c,temp=0;
    scanf("%d %d",&b,&c);
    for(int i=0;i<b;i++) {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<b;i++) {
        for(int j=0; j<b;j++) {
            if(a[j]>a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i=1;i<=b;i++) {
        printf("%d ",a[i]);
        if(i%c==0) printf("\n");
    }
}
