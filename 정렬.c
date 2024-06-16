#include <stdio.h>
int main()
{
    int a[101]={};
    int min,b,c,temp;
    scanf("%d",&b);
    for(int i=0;i<b;i++) {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<b-1;i++) {
        min=i;
        for(int j=i+1;j<b;j++) {
            if(a[min] > a[j]) min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    for(int i=0;i<b;i++) {
        printf("%d",a[i]);
    }
    return 0;
}