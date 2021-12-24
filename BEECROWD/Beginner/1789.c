#include <stdio.h>
int main()
{
    int n,i,j,m;
    while(scanf("%d",&n)!=EOF)
    {
        int a[n];
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<n; i++)
        {
            m=a[i];
            for(j=0; j<n; j++)
            {
                if(i==j) continue;
                if(m<a[j]) m=a[j];
            }
        }
        if(m<10) printf("1\n");
        else if(m>=10&&m<20) printf("2\n");
        else printf("3\n");
    }
    return 0;
}
