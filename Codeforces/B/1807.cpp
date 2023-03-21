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
        ll a[n+1], e=0, o=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0) e+=a[i];
            else o+=a[i];
        }
        if(e>o) cout<<"YES\n";
        else cout<<"NO\n";
    }
}