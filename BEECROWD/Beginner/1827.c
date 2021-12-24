#include <stdio.h>
int main()
{
    int n,i,j,m,e,x,y,p;
    while(scanf("%d",&n)!=EOF)
    {
        p=n;
        for(i=0; i<n/3; i++) //1st
        {
            x=0;
            y=0;
            for(j=0; j<n/3; j++)
            {
                if(i==j&&x==0)
                {
                    x++;
                    p--;
                    printf("2");
                }
                else printf("0");
            }
            for(j=n/3; j<p; j++)
            {
                printf("0");
            }
            for(j=p; j<n; j++)
            {
                if(y==0)
                {
                    y++;
                    printf("3");
                }
                else printf("0");
            }
            printf("\n");
        }
        for(i=n/3; i<p; i++) //2nd
        {
            for(j=0; j<n/3; j++)
            {
                printf("0");
            }
            for(j=n/3; j<p; j++)
            {
                if(i==n/2&&j==n/2) printf("4");
                else  printf("1");
            }
            for(j=n-1; j>=p; j--)
            {
                printf("0");
            }
            printf("\n");
        }
        for(i=n/3-1; i>=0; i--) //1st
        {
            x=0;
            y=0;
            for(j=0; j<n/3; j++)
            {
                if(i==j&&x==0)
                {
                    x++;
                    p++;
                    printf("3");
                }
                else printf("0");
            }
            for(j=n/3; j<p-1; j++)
            {
                printf("0");
            }
            for(j=p-1; j<n; j++)
            {
                if(y==0)
                {
                    y++;
                    printf("2");
                }
                else printf("0");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
