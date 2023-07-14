#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
map<ll,ll> present;
int main()
{
    FastIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        ll f=0, a, b;
        for(ll i=1; i<=n; i++)
        {
            ll x=(i*(i-1))/2, y=((n-i)*(n-i-1))/2;
            if(x+y==k) 
            {
                a=i;
                b=n-i; 
                f=1;
                break;
            }
        }
        if(f==0) cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            for(ll i=0; i<a; i++) cout<<"-1 ";
            for(ll i=0; i<b; i++) cout<<"1 ";
            cout<<endl;
        }
    }
}