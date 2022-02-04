#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll x,y,z,p,q,r,t,n,v;
    scanf("%lld",&t);
    while(t!=0)
    {
        scanf("%lld %lld %lld %lld %lld %lld",&x,&y,&z,&p,&q,&r);
        v=x+y+z;
        if(v>(p+q+r)/2)
        {
            printf("YES\n");
        }
        else
        {
            n=(1+(p+q+r)/2)-v;
            if(p-x>=n||q-y>=n||r-z>=n) printf("YES\n");
            else printf("NO\n");
        }
        t--;
    }
}
