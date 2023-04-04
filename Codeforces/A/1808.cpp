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
        ll x, y, res, m;
        cin>>x>>y;
        if(y-x<90)
        {
            for(ll i=x; i<=y; i++)
            {
                ll n=i, d1=n%10, d2=n%10;
                while(n)
                {
                    if(d1<n%10) d1=n%10;
                    if(d2>n%10) d2=n%10;
                    n/=10;
                }
                if(i==x)
                {
                    m=d1-d2;
                    res=i;
                }
                else if(d1-d2>m)
                {
                    m=d1-d2;
                    res=i;
                }
            }
        }
        else
        {
            y=x+90;
            for(ll i=x; i<=y; i++)
            {
                ll n=i, d1=n%10, d2=n%10;
                while(n)
                {
                    if(d1<n%10) d1=n%10;
                    if(d2>n%10) d2=n%10;
                    n/=10;
                }
                if(i==x)
                {
                    m=d1-d2;
                    res=i;
                }
                else if(d1-d2>m)
                {
                    m=d1-d2;
                    res=i;
                }
            }
        }
        cout<<res<<endl;
    }
}