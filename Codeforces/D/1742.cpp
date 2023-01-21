#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, r=0;
        cin>>n;
        ll a[n+1];
        map<ll,ll> m;
        map<ll,ll>::iterator it, jt;
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
            m[a[i]]=max(i,m[a[i]]);
        }
        for(it=m.begin();it!=m.end();it++)
        {
            for(jt=it;jt!=m.end();jt++)
            {
                if(__gcd(it->first,jt->first)==1)
                {
                    r=max(r,it->second+jt->second);
                }
            }
        }
        if(r!=0) cout<<r<<endl;
        else cout<<"-1\n";
    }
}