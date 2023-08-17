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
        ll a[n], s=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        if(s%2==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}