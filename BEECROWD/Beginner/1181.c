#include <stdio.h>
int main()
{
    float n[12][12],s=0;
    int i,j,a;
    char c;
    scanf("%d %c",&a,&c);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%f",&n[i][j]);
        }
    }
    for(i=0; i<12; i++)
    {
        s=n[a][i]+s;
    }
    if(c=='S') printf("%.1f\n",s);
    else printf("%.1f\n",s/12);
    return 0;
}
