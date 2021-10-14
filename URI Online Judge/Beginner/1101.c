#include <stdio.h>
int main()
{
int i,j,s,m,n;
for(i=0;i>=0;i++)
    {
        scanf("%d%d",&m,&n);
        if(m<=0||n<=0) break;
        else if(m>n&&m!=0&&n!=0)
            {
                s=0;
                for(j=n;j<=m;j++)
                    {
                        printf("%d ",j);
                        s=s+j;
                    }
                    printf("Sum=%d\n",s);
            }
            else if(m<n&&m!=0&&n!=0)
                {
                    s=0;
                    for(j=m;j<=n;j++)
                {
                    printf("%d ",j);
                    s=s+j;
                }
                printf("Sum=%d\n",s);
                }
    }
return 0;
}
