#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t,n;
    scanf("%lld",&t);
    for(ll i=0;i<t;i++)
    {
        scanf("%lld",&n);
        ll a[n+1];
        for(ll j=0;j<n;j++)
        {
            scanf("%lld",&a[j]);
        }
        sort(a,a+n);
        printf("%lld\n",a[n-1]-a[0]);
    }
}
