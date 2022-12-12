#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n], mx=0, mn=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(i==0) mx= a[i], mn=a[i];
            else
            {
                mx=max(mx,a[i]);
                mn=min(mn,a[i]);
            }
        }
        ll x=0,y=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]==mx) x++;
            if(a[i]==mn) y++;
        }
        if(mx==mn) cout<<x*(x-1)<<endl;
        else cout<<2*x*y<<endl;
    }
}
