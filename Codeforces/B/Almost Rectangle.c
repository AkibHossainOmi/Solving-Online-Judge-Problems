#include<stdio.h>
#include<string.h>
int main()
{
    int t,x=0,y=0,c=0,d=0;
    scanf("%d",&t);
    int i,j,k,r;
    for(i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        char a[n][n+1];
        x=0;
        y=0;
        c=0;
        d=0;
        r=0;
        for(j=0;j<n;j++)
        {
            scanf("%s",&a[j]);
            for(k=0;k<n;k++)
            {
                if(a[j][k]=='*'&&r==0)
                {
                    x=j;
                    y=k;
                    r++;
                }
                if(a[j][k]=='*'&&r!=0)
                {
                    c=j;
                    d=k;
                }
                if(r==2) break;
            }
        }
        if(x!=c&&y!=d)
        {
            a[c][y]='*';
            a[x][d]='*';
        }
        else if(y==d&&y<n-1)
        {
            a[x][y+1]='*';
            a[c][d+1]='*';
        }
        else if(y==d&&d==n-1)
        {
            a[x][y-1]='*';
            a[c][d-1]='*';
        }
        else if(x==c&&x<n-1)
        {
            a[x+1][y]='*';
            a[c+1][d]='*';
        }
        else if(x==c&&x==n-1)
        {
            a[x-1][y]='*';
            a[c-1][d]='*';
        }
        for(j=0;j<n;j++)
        {
            printf("%s\n",a[j]);
        }

    }
}
