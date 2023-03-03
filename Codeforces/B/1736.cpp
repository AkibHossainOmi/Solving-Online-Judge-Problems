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
        ll a[n+2], j;
        vector<ll> r;
        a[0]=1, a[n+1]=1;
        for(ll i=1; i<n+1; i++) cin>>a[i];
        for(ll i=1; i<n+2; i++) r.push_back(lcm(a[i],a[i-1]));
        for(j=1; j<r.size()&&__gcd(r[j],r[j-1])==a[j]; j++);
        if(j==r.size()) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
