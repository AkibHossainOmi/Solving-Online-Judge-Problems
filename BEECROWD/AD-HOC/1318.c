#include<stdio.h>
int main()
{
    int m,n,k=0,r=0,x=0,y=0,z;
    for(z=0; z>=0; z++)
    {
        k=0,r=0,x=0,y=0;
        scanf("%d%d",&n,&m);
        int t[m],i,j,a[m];
        if(m==0&&n==0) break;
        for(i=0; i<m; i++)
        {
            k=0;
            scanf("%d",&t[i]);
            for(j=i-1; j>=0; j--)
            {
                if(t[i]==t[j])
                {
                    k++;
                    break;
                }
            }
            if(k==0)
            {
                a[r]=t[i];
                r++;

            }
        }
        for(i=0; i<r; i++)
        {
            x=0;
            for(j=0; j<m; j++)
            {
                if(a[i]==t[j])
                {
                    x++;
                    if(x==2)
                    {
                        y++;
                    }
                }
            }
        }
        printf("%d\n",y);
    }
    return 0;

}
