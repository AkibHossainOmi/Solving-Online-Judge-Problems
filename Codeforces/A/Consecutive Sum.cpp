#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        ll a[n+1];
        ll sum=0;
        for(ll i=0; i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0; i<k;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                if((i+1)%k==(j+1)%k)
                {
                    ll t=min(a[i],a[j]);
                    a[i]=max(a[i],a[j]);
                    a[j]=t;
                }
            }
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
}
