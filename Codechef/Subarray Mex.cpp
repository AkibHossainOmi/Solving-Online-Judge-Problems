#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t, i, n, k, x, r, c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        r=0;
        scanf("%d %d %d",&n,&k,&x);
        if(x>k)
        {
            printf("-1\n");
            continue;
        }
        if(x==0) r++;
        c=0;
        for(int j=0;j<n;j++)
        {
            printf("%d ",r);
            r++;
            if(r==x)
            {
                r=0;
            }
        }
        printf("\n");
    }
    return 0;
}

