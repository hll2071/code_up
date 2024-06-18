#include <stdio.h>
int main()
{
    char *p;
    char s[5]="*****";
    p = s;
    for(int i=0;i<5;i++) {
        printf("%s\n",p+i);
    }
    return 0;
}