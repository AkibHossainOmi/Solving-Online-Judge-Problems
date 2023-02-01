#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, m, s=0;
        cin>>n>>m;
        multimap<ll,ll> v;
        ll p[m], w[m], r[m];
        map<ll,ll> ps;
        for(ll i=0; i<m; i++)
        {
            cin>>p[i]>>w[i];
            ps[p[i]]=i+1;
            v.insert({w[i],p[i]});
        }
        sort(w,w+m);
        for(ll i=0; i<2*n; i++)
        {
            s+=w[i];
            auto it=v.find(w[i]);
            r[i]=it->second;
            v.erase(it);
        }
        sort(r,r+2*n);
        cout<<s<<endl;
        for(ll i=0, j=2*n-1; i<n; i++)
        {
            cout<<ps[r[i]]<<" "<<ps[r[j]];
            cout<<endl;
            j--;
        }
    }
}
