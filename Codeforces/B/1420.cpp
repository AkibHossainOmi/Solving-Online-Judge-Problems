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
        ll n;
        cin>>n;
        ll a[n], count=0;
        map<ll,ll> present;
        for( ll i=0; i<n; i++)
        {
            cin>>a[i];
            ll x=(ll)(log2(a[i])), size=bitset<64>(a[i]).to_string().substr(64-x-1).size();
            count+=present[size];
            present[size]++;
        }
        cout<<count<<endl;
    }
}