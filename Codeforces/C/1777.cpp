#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> factor[100000];
int main()
{
    ll t; 
    cin>>t;
    for(ll i=1;i<=100000;i++)
    {
        for(ll j=1; j*j<=i; j++) 
        {
            if(i%j==0&&j*j<i) factor[i].push_back(j), factor[i].push_back(i/j);
            else if(i%j==0) factor[i].push_back(j);
        }
    }
    while(t--)
    {
        ll n, m;
        cin>>n>>m;
        ll a[n], f[m+1]={}, L=0, R=0, s=-1, total=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        while(L<=R&&R<=n)
        {
            if(m==total)
            {
                for(ll j=0; j<factor[a[L]].size(); j++)
                {
                    if(factor[a[L]][j]>m) continue;
                    f[factor[a[L]][j]]--;
                    if(f[factor[a[L]][j]]==0) total--;
                }
                L++;
            }
            else
            {
                if(R<n)
                {
                    for(ll j=0; j<factor[a[R]].size(); j++)
                    {
                        if(factor[a[R]][j]>m) continue;
                        f[factor[a[R]][j]]++;
                        if(f[factor[a[R]][j]]==1) total++;
                    }
                }
                R++;
            }
            if(m==total) 
            {
                if(s==-1) s=a[R-1]-a[L];
                else s=min(s,a[R-1]-a[L]);
            }
        }
        if(s!=-1) cout<<s<<endl;
        else cout<<"-1\n";
    }
}