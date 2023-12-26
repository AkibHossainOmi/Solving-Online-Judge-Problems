#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll t=1;
    cin>>t;
    map<ll,ll> count;
    for(ll i=0; i<=9; i++)
    {
        for(ll j=0; j<=9; j++)
        {
            for(ll k=0; k<=9; k++)
            {
                count[i+j+k]++;
            }
        }
    }
    while(t--)
    {
        string n;
        cin>>n;
        ll res=1;
        for(ll i=0; i<n.size(); i++)
        {
            res*=count[n[i]-'0'];
        }
        cout<<res<<endl;
    }
}
