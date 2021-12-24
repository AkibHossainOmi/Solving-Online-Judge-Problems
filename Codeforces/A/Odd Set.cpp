#include<stdio.h>
int main()
{
    int n,i,j,t,r;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int a[n*2];
        r=0;
        for(j=0;j<2*n;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]%2==1)
            {
                r++;
            }
        }
        if(r==n) printf("Yes\n");
        else printf("No\n");
    }
}
