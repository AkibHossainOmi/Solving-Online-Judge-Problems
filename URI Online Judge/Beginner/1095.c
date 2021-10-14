#include <stdio.h>
int main()
{
int i,m=1,n=60;
for(i=1;i<14;i++)
{
    printf("I=%d J=%d\n",m,n);
    m=m+3;
    n=n-5;
}
    return 0;
}
