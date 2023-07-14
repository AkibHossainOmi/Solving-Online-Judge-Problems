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
        ll n, k, x, count=0;
        cin>>n>>k;
        for(ll i=1; i<=n; i++)
        {
            cin>>x;
            if(abs(x-i)%k!=0) count++;
        }
        if(count==0) cout<<"0\n";
        else if(count==2) cout<<"1\n";
        else cout<<"-1\n";
    }
}