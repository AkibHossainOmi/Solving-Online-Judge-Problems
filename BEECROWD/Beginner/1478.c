#include <stdio.h>
int main()
{
    int n[100][100],i,j,k,a;
    for(k=0;k>=0;k++)
    {
        scanf("%d",&a);
        if(a==0) break;
        int s=0,r,p;
        for(i=0;i<a;i++)
        {
            r=i+1;
            p=1;
            for(j=0;j<a;j++)
            {
                s++;
                if(i==0)
                {
                    if(j==a-1) printf("%3d",s);
                    else printf("%3d ",s);
                }
                else
                {
                    if(r>0)
                    {
                        if(j==a-1) printf("%3d",r);
                        else printf("%3d ",r);
                        r--;
                    }
                    else if(r==0)
                    {
                        p++;
                        if(j==a-1) printf("%3d",p);
                        else printf("%3d ",p);
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
