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
        map<ll,ll> count;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            count[a[i]]++;
        }
        if(count[0]==0) cout<<"0\n";
        else if(count[0]<=(n-count[0])+1) cout<<"0\n";
        else if(count[1]==0) cout<<"1\n";
        else
        {
            ll others=n-count[0]-count[1];
            if(others>0) cout<<"1\n";
            else cout<<"2\n";
        }
    }
}