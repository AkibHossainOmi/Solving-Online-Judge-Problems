#include <stdio.h>
int main()
{
    int n,i,j,a[100],m;
    while((scanf("%d",&n))!=EOF)
    {
        m=n;
        for(i=0; i<n; i++)
        {
            m--;
            if(n%2==0)
            {
                for(j=0; j<n; j++)
                {
                    if(i==j) printf("1");
                    else if(j==m) printf("2");
                    else printf("3");
                }
                printf("\n");
            }
            else
            {
                for(j=0; j<n; j++)
                {
                    if(i==j&&i!=n/2) printf("1");
                    else if(j==m) printf("2");
                    else printf("3");
                }
                printf("\n");
            }
        }
    }
    return 0;
}
