#include<stdio.h>
#include<string.h>
int main()
{
    int n, p, q, r=0;
    scanf("%d",&n);
    scanf("%d",&p);
    int a[p], l[n];
    for(int i=0; i<n; i++)
    {
        l[i]=i+1;
    }
    for(int i=0; i<p; i++)
    {
        scanf("%d",&a[i]);
        for(int j=0; j<n; j++)
        {
            if(l[j]==a[i])
            {
                r++;
                l[j]=-1;
                break;
            }
        }
    }
    scanf("%d",&q);
    int b[q];
    for(int i=0; i<q; i++)
    {
        scanf("%d",&b[i]);
        for(int j=0; j<n; j++)
        {
            if(l[j]==b[i])
            {
                r++;
                l[j]=-1;
                break;
            }
        }
    }
    if(r==n) printf("I become the guy.\n",r);
    else printf("Oh, my keyboard!\n",r);
}
