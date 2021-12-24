#include <stdio.h>
int main()
{
    int n[100][100],i,j,k,a;
    for(k=0;k>=0;k++)
    {
        scanf("%d",&a);
        if(a==0) break;
        int s;
        if(a%2!=0)
        {
            for(i=0;i<=a/2;i++)
            {
                s=0;
                for(j=0;j<=a/2;j++)
                {
                    if(s<i+1)
                    s++;
                    n[i][j]=s;
                    if(a==1) printf("%3d",s);
                    else printf("%3d ",s);
                }
                for(j=a/2-1;j>=0;j--)
                {
                    if(j==0) printf("  %d",n[i][j]);
                    else printf("%3d ",n[i][j]);
                }
                printf("\n");
            }
            for(i=a/2-1;i>=0;i--)
            {
                for(j=0;j<=a/2;j++)
                {
                    printf("%3d ",n[i][j]);
                }
                for(j=a/2-1;j>=0;j--)
                {
                    if(j==0) printf("%3d",n[i][j]);
                    else printf("%3d ",n[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            for(i=0;i<a/2;i++)
            {
                s=0;
                for(j=0;j<a/2;j++)
                {
                    if(s<i+1)
                    s++;
                    n[i][j]=s;
                    printf("%3d ",s);
                }
                for(j=a/2-1;j>=0;j--)
                {
                    if(j==0) printf("%3d",n[i][j]);
                    else printf("%3d ",n[i][j]);
                }
                printf("\n");
            }
            for(i=a/2-1;i>=0;i--)
            {
                for(j=0;j<a/2;j++)
                {
                    printf("%3d ",n[i][j]);
                }
                for(j=a/2-1;j>=0;j--)
                {
                    if(j==0) printf("%3d",n[i][j]);
                    else printf("%3d ",n[i][j]);
                }
                printf("\n");
            }
        }
    printf("\n");
    }
    return 0;
}
