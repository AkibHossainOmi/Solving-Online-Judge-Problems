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
        ll n;
        cin>>n;
        vector<ll> a;
        ll x, check=1, sum=0, count=0;
        if(n==1) check=0;
        for(ll i=0; i<n; i++) 
        {
            cin>>x;
            a.push_back(x);
        }
        for(ll i=0; i<n; i++) 
        {
            if(a[i]==1) count++;
            else sum+=a[i];
        }
        sum-=count;
        n-=count;
        if(sum<n) check=0;
        if(check) cout<<"YES\n";
        else cout<<"NO\n";
    }
}