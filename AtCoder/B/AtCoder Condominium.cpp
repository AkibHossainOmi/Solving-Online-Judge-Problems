#include<stdio.h>
int main()
{
    int n,k,i,j,r=0;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            r+=i*100+j;
        }
    }
    printf("%d\n",r);
    return 0;
}
