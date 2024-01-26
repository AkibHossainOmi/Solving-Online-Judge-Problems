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
        ll n, m;
        cin>>n>>m;
        vector<ll> a(n), b(m);
        for(ll i=0; i<n; i++) cin>>a[i];
        for(ll i=0; i<m; i++) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll La=0, Ra=n-1, Lb=0, Rb=m-1, i=0, diff=0;
        while(i<n)
        {
            ll d1=abs(a[La]-b[Rb]), d2=abs(b[Lb]-a[Ra]);
            if(d1>d2) diff+=d1, La++, Rb--, i++;
            else diff+=d2, Lb++, Ra--, i++;
        }
        cout<<diff<<endl;
    }
}