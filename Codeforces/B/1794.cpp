#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++) cin>>a[i];
        for(ll i=0; i<n; i++) if(a[i]==1) a[i]++;
        for(ll i=1; i<n; i++) if(a[i]%a[i-1]==0) a[i]++;
        for(ll i=0; i<n; i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}