#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n, e=0, i, y=0;
        float x=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            x+=a[i]*1.0;
        }
        for(i=0;i<n;i++)
        {
            if(x/n==a[i])
            {
                y=1;
                break;
            }
        }
        if(y==1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
