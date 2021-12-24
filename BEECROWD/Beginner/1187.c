#include <stdio.h>
int main()
{
    double n[12][12],s=0,m=0,t=1,u=11;
    int i,j;
    char c;
    scanf("%c",&c);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&n[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=t;j<u;j++)
        {
            m++;
            s=n[i][j]+s;
        }
        t++;
        u--;
    }
    if(c=='S') printf("%.1lf\n",s);
    else printf("%.1lf\n",s/m);
    return 0;
}
