#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

ll r=0, m;

void res(ll n)
{
    if(m==n) r=1;
    else if(n%3==0)
    {
        ll x=(n/3)*2, y=n/3;
        if(m==x||m==y) r=1;
        res(n/3);
        res((n/3)*2);
    }
}

int main()
{
    FastIO;
    ll t;
    cin>>t;
    while(t--)
    {
        r=0;
        ll n, f=0;
        cin>>n>>m;
        res(n);
        if(r==0) cout<<"NO\n";
        else cout<<"YES\n";
    }
}