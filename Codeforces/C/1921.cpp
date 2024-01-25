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
        ll  n, f, a, b;
        cin>>n>>f>>a>>b;
        vector<ll> moment(n);
        ll chargeNeeded=0, prevMoment=0;
        for(ll i=0; i<n; i++)
        {
            cin>>moment[i];
            chargeNeeded+=min((moment[i]-prevMoment)*a,b);
            prevMoment=moment[i];
        }
        if(chargeNeeded<f) cout<<"YES\n";
        else cout<<"NO\n";
    }
}