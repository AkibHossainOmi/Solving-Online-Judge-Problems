#include <stdio.h>

int main()
{
    int i,n,f=0,s=1,t;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i<n)
        {
            printf("%d ",f);
            t=f+s;
            f=s;
            s=t;
        }
        else
        {
            printf("%d\n",f);
            t=f+s;
            s=t;
            f=s;
        }
    }
    return 0;
}
