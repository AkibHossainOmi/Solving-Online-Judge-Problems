#include<stdio.h>
int main()
{
    long long int x, i, j, u=1, t=0, n=0, r;
    scanf("%lld",&x);
    for(j=0;j>=0;j++)
    {
        r=1;
        for(i=u;i>0;i--)
        {
            r=i*r;
        }
        if(r+n>x)
        {
            r=1;
            for(i=u-1;i>0;i--)
            {
                r=i*r;
            }
            n=r+n;
            t++;
            u=0;
            if(n==x) break;
        }
        u++;
    }
    printf("%lld\n",t);
    return 0;
}
