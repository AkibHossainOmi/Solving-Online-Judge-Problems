#include <stdio.h>

int main()
{
    int i,a[20],s=0;
    for(i=0; i<20; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=19; i>=0; i--)
    {
        printf("N[%d] = %d\n",s,a[i]);
        s++;
    }
    return 0;
}
