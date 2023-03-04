#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll c[100]={}, a[60];
void countWeight(ll n)
{
    for(ll k=0; k<51; k++)
    {
        c[k]=0;
    }
    for(ll k=0; k<n; k++)
    {
        c[a[k]]++;
    }
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll b[200]={};
        vector<ll> unique, weight;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(ll i=0; i<n; i++)
        {
            for(ll j=i+1; j<n; j++)
            {
                b[a[i]+a[j]]++;
                if(b[a[i]+a[j]]==1) weight.push_back(a[i]+a[j]);
            }
        }
        ll needed, m=0, s=0;
        for(ll i=0; i<weight.size(); i++)
        {
            countWeight(n), s=0;
            for(ll j=0; j<n; j++)
            {
                needed=weight[i]-a[j];
                if(needed<0||c[a[j]]==0||c[needed]==0) continue;
                if(needed!=a[j])
                {
                    if(c[needed]>0) c[needed]--, c[a[j]]--, s++;
                }
                else if(needed==a[j])
                {
                    if(c[needed]>1) c[needed]--, c[a[j]]--, s++;
                }
            }
            m=max(m,s);
        }
        cout<<m<<endl;
    }
}
