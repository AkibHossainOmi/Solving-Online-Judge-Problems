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
        ll a[n], c=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<0) c++;
        }
        for(ll i=1; i<=n-c; i++) cout<<i<<" ";
        for(ll i=1; i<=c; i++) cout<<n-c-i<<" ";
        cout<<endl;
        for(ll i=1; i<=c; i++) cout<<"1 0 ";
        for(ll i=1; i<=n-2*c; i++) cout<<i<<" ";
        cout<<endl;
    }
}