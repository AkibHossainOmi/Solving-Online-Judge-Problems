#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,v,n,r,x=0,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int a[n];
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
        if(a[j]!=a[j-1]&&a[j]!=a[j-2]&&x==0&&j>1)
        {
            x++;
            r=j;
        }
    }
    for(j=0;j<n;j++)
    {
        for(v=0;v<n;v++)
        {
        if(a[j]==a[v]&&v!=j)
        {
            x++;
        }
        }
        if(x==0)
        {
                printf("%d\n",j+1);
                break;
        }
    x=0;
    }
    }
}
