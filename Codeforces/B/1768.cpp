#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        ll a[n],  m=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(ll i=0; i<n; i++)
        {
            if(a[i]==m+1) m++;
        }
        m=n-m;
        if(m%k==0) cout<<(ll)(m/k)<<endl;
        else cout<<(ll)(m/k)+1<<endl;
    }
}
