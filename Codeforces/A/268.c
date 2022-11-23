#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int h[t], g[t], i, j, r=0;
    for(i=0; i<t; i++)
    {
        scanf("%d %d",&h[i],&g[i]);
    }
    for(i=0; i<t; i++)
    {
        for(j=0;j<t;j++)
        {
            if(j==i) continue;
            if(h[i]==g[j]) r++;
        }
    }
    printf("%d\n",r);
}
