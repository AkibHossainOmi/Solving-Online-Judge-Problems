#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int t,i,h,j,k,x,r,y,z;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        x=0;
        r=0;
        y=0;
        z=0;
        scanf("%d",&h);
        int l[h];
        for(j=0;j<h;j++)
        {
            scanf("%d",&l[j]);
        }
        for(j=0;j<h-1;j++)
        {
            if(l[j]<l[j+1])
            {
                r++;
                break;
            }
            else if(l[j]>l[j+1])
            {
                r++;
                break;
            }
        }
        for(j=0;j<h;j++)
        {
            z=0;
            for(k=0;k<h;k++)
            {
                if(l[j]>l[k]&&j!=k)
                {
                    z++;
                }

            }
            if(z==0)
            {
                x=l[j];
            }
        }
        for(j=0;j<h;j++)
        {
            if(l[j]==x)
            {
                y++;
            }
        }
        printf("%d\n",h-y);
    }
    return 0;
}
