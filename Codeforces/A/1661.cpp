#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ll a[n],b[n];
        for(ll i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(ll i=0;i<n;i++)
        {
            scanf("%lld",&b[i]);
        }
        for(ll i=0;i<n;i++)
        {
            if(i>0)
            {
                if(abs(a[i]-a[i-1])+abs(b[i]-b[i-1])>abs(b[i]-a[i-1])+abs(a[i]-b[i-1]))
                {
                    ll temp=a[i];
                    a[i]=b[i];
                    b[i]=temp;
                }
            }
        }
        if(abs(a[0]-a[1])+abs(b[0]-b[1])>abs(b[0]-a[1])+abs(a[0]-b[1]))
        {
            ll temp=a[0];
            a[0]=b[0];
            b[0]=temp;
        }
        ll s=0;
        for(ll i=1;i<n;i++)
        {
            s=s+abs(a[i]-a[i-1])+abs(b[i]-b[i-1]);
        }
        printf("%lld\n",s);
    }
    return 0;
}
