#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        ll a[n];
        map<ll,ll> count;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            count[a[i]]++;
        }

        if(count[k]==0) cout<<"NO\n";
        else cout<<"YES\n";
    }
}