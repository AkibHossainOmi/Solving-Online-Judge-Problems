#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

ll mex(vector<ll> b, ll n)
{
    ll m=-1, mx=0;
    map<ll,ll> br;
    for(ll i=0; i<n; i++) br[b[i]]++, mx=max(mx,b[i]);
    for(ll i=0; i<=mx; i++)
    {
        if(br[i]==0)
        {
            m=i;
            break;
        }
    }
    if(m==-1) m=mx+1;
    return m;
}

int main()
{
    FastIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, x;
        vector<ll> a;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        ll mx=mex(a,n)+1, flag=0;
        if(mx==1) cout<<"YES\n";
        else
        {
            for(ll i=0; i<n; i++) if(a[i]==mx) flag=1;
            if(flag==1)
            {
                ll L, R;
                for(ll i=0; i<n; i++)
                {
                    if(a[i]==mx)
                    {
                        L=i;
                        break;
                    }
                }
                for(ll i=n-1; i>=0; i--)
                {
                    if(a[i]==mx)
                    {
                        R=i;
                        break;
                    }
                }
                for(ll i=L; i<=R; i++) a[i]=mx-1;
                if(mex(a,n)==mx) cout<<"YES\n";
                else cout<<"NO\n";
            }
            else
            {
                map<ll,ll> count;
                ll y=0;
                for(ll i=0; i<n; i++)
                {
                    count[a[i]]++;
                    if(a[i]<mx&&count[a[i]]==1) y++;
                }
                if(y==n) cout<<"NO\n";
                else cout<<"YES\n";
            }
        }
    }
}