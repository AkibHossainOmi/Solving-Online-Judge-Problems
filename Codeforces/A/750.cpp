#include<stdio.h>
int main()
{
    int n,k,i,t,p=0;
    scanf("%d %d",&n,&k);
    t=240-k;
    for(i=1;i<=n;i++)
    {
        p=p+5*i;
        if(p>t) break;
    }
    printf("%d\n",i-1);
}
