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
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll x=a[0], c=0, r=0;
        for(ll i=0; i<n; i++)
        {
            c++;
            if(c==x&&x==a[i]) c=0, x=a[i+1], r++;
            else x=a[i];
        }
        cout<<r<<endl;
    }
}
