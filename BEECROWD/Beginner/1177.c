#include <stdio.h>

int main()
{
    int i,n,j,s=0;
    int a[1000];
    scanf("%d",&n);
    for(i=0; i<1000; i++)
    {
        if(s==n) s=0;
        printf("N[%d] = %d\n",i,s);
        s++;
    }
    return 0;
}
