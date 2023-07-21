#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

ll c=0;
map<ll,ll> present;
void CheckDivisors(ll n)
{
    c=0;
    for (ll i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i && present[i]>0) c+=present[i];
            else 
            {
                if(present[i]>0) c+=present[i];
                if(present[(ll)(n/i)]>0) c+=present[(ll)(n/i)];
            }
        }
    }
}

int main()
{
    FastIO;
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n], end=-1, start=n+5, maxc=0; 
        for(ll i=0; i<n; i++) 
        {
            cin>>a[i];
            if(a[i]<=n) 
            {
                present[a[i]]++;
                start=min(start,a[i]);
                end=max(end,a[i]);
            }
        }
        ll x=0;
        for(ll i=end; i>=start; i--)
        {
            CheckDivisors(i);
            maxc=max(c,maxc);
        }
        cout<<maxc<<endl;
        present.clear();
    }
}