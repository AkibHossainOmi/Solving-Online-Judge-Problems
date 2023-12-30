#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll t=1;
    cin>>t;
    ll y=2023;
    while(t--)
    {
        ll n, k, p=1;
        cin>>n>>k;
        vector<ll> a(n);
        for(ll i=0; i<n; i++) 
        {
            cin>>a[i];
            p*=a[i];
        }
        if(y%p==0) 
        {
            cout<<"YES\n";
            cout<<y/p<<" ";
            for(ll i=2; i<=k; i++) cout<<"1 ";
            cout<<endl;
        }
        else cout<<"NO\n";
    }
}
