#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll maxcon(ll a[], ll n, ll k)
{
    ll sum, m=0;
    for(ll i=0;i<n;i++)
    {
        if(i+k-1>n-1) break;
        sum=0;
        for(ll j=i;j<i+k;j++)
        {
            //cout<<j<<" ";
            sum+=a[j];
        }
        if(sum>m) m=sum;
        //cout<<endl;
    }
    return m;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        ll a[n+1];
        ll sum=0, x=0, m, p;
        for(ll i=0; i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0; i<k;i++)
        {
            for(ll j=0;j<n;j++)
            {
                if((i+1)%k==(j+1)%k)
                {
                    ll t=min(a[i],a[j]);
                    a[i]=max(a[i],a[j]);
                    a[j]=t;
                }
            }
        }
        cout<<maxcon(a,n,k)<<endl;
    }
}
