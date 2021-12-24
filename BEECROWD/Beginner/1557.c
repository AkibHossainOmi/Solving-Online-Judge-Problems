#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,k,n,s,t;
    for(i=0; i>=0; i++)
    {
        scanf("%d",&n);
        if(n==0) break;
        int a[n][n];
        s=1;
        for(j=0; j<n; j++)
        {
            t=s;
            for(k=0; k<n; k++)
            {
                a[j][k]=t;
                t=t*2;
                if(n==1||n==2)
                {
                    if(k==n-1) printf("%1d",a[j][k]);
                    else printf("%1d ",a[j][k]);
                }
                else if(n==3||n==4)
                {
                    if(k==n-1) printf("%2d",a[j][k]);
                    else printf("%2d ",a[j][k]);
                }
                else if(n==5)
                {
                    if(k==n-1) printf("%3d",a[j][k]);
                    else printf("%3d ",a[j][k]);
                }
                else if(n==6||n==7)
                {
                    if(k==n-1) printf("%4d",a[j][k]);
                    else printf("%4d ",a[j][k]);
                }
                else if(n==8||n==9)
                {
                    if(k==n-1) printf("%5d",a[j][k]);
                    else printf("%5d ",a[j][k]);
                }
                else if(n==10)
                {
                    if(k==n-1) printf("%6d",a[j][k]);
                    else printf("%6d ",a[j][k]);
                }
                else if(n==11||n==12)
                {
                    if(k==n-1) printf("%7d",a[j][k]);
                    else printf("%7d ",a[j][k]);
                }
                else if(n==13||n==14)
                {
                    if(k==n-1) printf("%8d",a[j][k]);
                    else printf("%8d ",a[j][k]);
                }
                else if(n==15)
                {
                    if(k==n-1) printf("%9d",a[j][k]);
                    else printf("%9d ",a[j][k]);
                }
            }
            s*=2;
            printf("\n");
        }
        printf("\n");
    }


    return 0;
}
