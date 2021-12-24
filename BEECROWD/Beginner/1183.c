#include <stdio.h>
int main()
{
    float n[12][12],s=0,m=0,t=1;
    int i,j;
    char c;
    scanf("%c",&c);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%f",&n[i][j]);
        }
    }
    for(i=0; i<11; i++)
    {
        for(j=t; j<12; j++)
        {
            m++;
            s=n[i][j]+s;
        }
        t++;
    }
    if(c=='S') printf("%.1f\n",s);
    else printf("%.1f\n",s/m);
    return 0;
}
