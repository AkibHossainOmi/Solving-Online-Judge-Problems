#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i,a,b,c,s=0,u=0,j,n;
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int a[n];
        u=0;
        s=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]==2)
            {
                s++;
            }
            else
            {
                u++;
            }
        }
        if(s%2!=0&&u>=2)
        {
            u-=2;
            s+=1;
        }
        if(s%2==0&&u%2==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }

    return 0;
}
