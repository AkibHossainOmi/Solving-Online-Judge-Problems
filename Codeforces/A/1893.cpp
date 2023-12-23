#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k, x;
        cin>>n>>k;
        vector<ll> a;
        for(ll i=0; i<n; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        ll last=n, operation=0;
        k=min(n,k);
        while(a[last-1]<=n&&operation!=k)
        {
            operation++;
            last+=n-a[last-1];
            if(last>n) last-=n;
        }
        if(operation==k) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
