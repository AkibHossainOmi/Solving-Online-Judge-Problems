#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, s, m;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n), s=a[0], m=a[0];
        for(ll i=1;i<n;i++)
        {
            a[i]-=s, s+=a[i], m=max(m,a[i]);
        }
        cout<<m<<endl;
    }
}
