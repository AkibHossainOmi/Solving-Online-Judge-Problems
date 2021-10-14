#include <stdio.h>
int main()
{
int i,j,m=7;
for(i=1;i<=9;i+=2)
{
    for(j=m;j>=m-2;j--)
    {
        printf("I=%d J=%d\n",i,j);
    }
    m+=2;
}
    return 0;
}
