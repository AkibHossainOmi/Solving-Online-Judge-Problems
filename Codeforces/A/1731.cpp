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
        ll a[n], m=1;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            m*=a[i];
        }
        m+=n-1;
        cout<<m*2022<<endl;
    }
}
