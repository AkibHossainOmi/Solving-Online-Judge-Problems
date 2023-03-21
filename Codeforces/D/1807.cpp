#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, q;
        cin>>n>>q;
        ll a[n], sum[n+2], x=0;
        sum[0]=0, sum[n+1]=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            x+=a[i];
            sum[i+1]=x;
        }
        for(ll i=0; i<q; i++)
        {
            ll l, r, k;
            cin>>l>>r>>k;
            ll s=sum[l-1]+sum[n]-sum[r]+(r-l+1)*k;
            if(s%2==0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}