#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k, d=0, x;
        cin>>n>>k;
        ll a[n], b[n], totalK=k;
        multimap<ll,ll> h;
        map<ll,ll> p;
        multimap<ll,ll>::iterator it;
        map<ll,ll>::iterator ip;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(ll i=0; i<n; i++)
        {
            cin>>b[i];
            p[b[i]]++;
            h.insert(make_pair(a[i],b[i]));
        }
        it=h.begin();
        while(it!=h.end())
        {
            if(it->first<=k) 
            {
                p[it->second]--;
                if(p[it->second]==0) p.erase(it->second);
                d++;
            }
            else
            {
                x=it->first;
                x-=totalK;
                while(x>0&&k>0)
                {
                    ip=p.begin();
                    if(x>0) 
                    {
                        k-=ip->first;
                    }
                    x-=k, totalK+=k;
                }
                if(x<=0) 
                {
                    p[it->second]--;
                    if(p[it->second]==0) p.erase(it->second);
                    d++;
                }
                if(k<=0) break;
            }
            it++;
        }
        if(d==n) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
