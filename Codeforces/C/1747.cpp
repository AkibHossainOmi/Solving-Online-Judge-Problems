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
        ll a[n], mn=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            if(mn==0) mn=a[i];
            if(mn>a[i]) mn=a[i];
        }
        if(a[0]>mn) cout<<"Alice\n";
        else cout<<"Bob\n";
    }
}
