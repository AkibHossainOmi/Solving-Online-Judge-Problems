#include <stdio.h>
int main()
{
    int t,c,i,n=0;
    scanf("%d",&t);
    for(i=0; i<5; i++)
    {
        scanf("%d",&c);
        if(c==t) n++;
    }
    printf("%d\n",n);
    return 0;
}
