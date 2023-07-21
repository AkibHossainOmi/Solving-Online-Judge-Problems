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
        vector<ll> a;
        ll x;
        for(ll i=0; i<n; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        ll c=1, maxc=0;
        for(ll i=1; i<n; i++)
        {
            if(a[i]-a[i-1]<=k) c++;
            else maxc=max(maxc,c), c=1;
        }
        maxc=max(maxc,c);
        cout<<n-maxc<<endl;
    }
}