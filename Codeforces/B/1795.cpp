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
        ll L[n], R[n], f=0;
        ll c[55]={};
        for(ll i=0; i<n; i++)
        {
            cin>>L[i]>>R[i];
            if(k>=L[i]&&k<=R[i])
            {
                for(ll j=L[i]; j<=R[i]; j++) 
                {
                    c[j]++;
                }
            }
        }
        ll x=c[k];
        for(ll i=1; i<=50; i++)
        {
            if(i!=k&&c[i]==x) 
            {
                f=1;
                break;
            }
        }
        if(f==1) cout<<"NO\n";
        else cout<<"YES\n";
    }
}
