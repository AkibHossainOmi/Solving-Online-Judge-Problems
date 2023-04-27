#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b;
        cin>>a>>b;
        ll cost=a+b, mx=max(a,b), mn=min(a,b);
        for(ll i=2; i<=2*sqrt(max(a,b)); i++) 
        {
            ll x, y;
            if(mx%i==0) x=i-1+mx/i; 
            else x=i-1+mx/i+1;
            if(mn%i==0) y=mn/i;
            else y=mn/i+1;
            cost=min(cost,x+y);
        }
        cout<<cost<<endl;
    }
}