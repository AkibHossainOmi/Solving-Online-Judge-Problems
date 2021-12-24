#include<stdio.h>
int main()
{
    int i,j,k,l,s;
    for(i=0;i>=0;i++)
    {
        int a, b,x;
        s=0;
        x=0;
        scanf("%d%d",&a,&b);
        if(a==0&&b==0)
        {
            break;
        }
        int n[b],m,o[a];
        for(l=0;l<=a;l++)
        {
            o[l]=l;
            x++;
        }
        for(j=0;j<b;j++)
        {
            scanf("%d",&n[j]);
        }
        for(j=0;j<b;j++)
        {
            for(k=j;k<b;k++)
            {
                m=n[j]-n[k];
                if(m<0)
                    m=m*(-1);
                for(l=0;l<=a;l++)
                {
                    if(m==o[l]&&o[l]!=-1)
                    {
                        s++;
                        o[l]=-1;
                        break;
                    }
                }
            }

        }
        if(s==x) printf("Y\n");
        else printf("N\n");
    }


    return 0;
}
