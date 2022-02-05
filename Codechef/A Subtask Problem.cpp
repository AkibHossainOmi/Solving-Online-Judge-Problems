#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,k,i,sum,r;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        sum=0;
        r=0;
        scanf("%d %d %d",&n,&m,&k);
        int a[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]==0)
            {
                r++;
            }
            if(a[j]==1&&r==0) sum++;
        }
        if(sum==n) printf("100\n");
        else if(sum>=m) printf("%d\n",k);
        else printf("0\n");
    }
}
