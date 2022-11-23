#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int f[n],x;
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&x);
        f[x-1]=i;
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",f[i]);
    }
}
