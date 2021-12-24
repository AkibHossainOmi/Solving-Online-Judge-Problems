#include <stdio.h>
int main()
{
    double n[12][12],s=0,m=0,t=0;
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
    for(i=1;i<11;i++)
    {
        if(i<6) t++;
        if(i==6) t=6;
        if(i>5) t--;
        for(j=0;j<t;j++)
        {
            m++;
            s=n[i][j]+s;
        }
    }
    if(c=='S') printf("%.1lf\n",s);
    else printf("%.1lf\n",s/m);
    return 0;
}
