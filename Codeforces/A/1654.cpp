#include <bits/stdc++.h>
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
        ll a[n+5];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<a[n-1]+a[n-2]<<endl;
    }
}
