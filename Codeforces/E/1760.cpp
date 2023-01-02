#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n, x=-1, p=0, q=0, r=0, one=0, zero=0;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                one++;
            }
            if(a[i]==0)
            {
                r+=one;
            }
        }
        one=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]==0) 
            {
                a[i]=1;
                x=i;
                break;
            }
        }
        for(ll i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                one++;
            }
            if(a[i]==0)
            {
                p+=one;
            }
        }
        one=0;
        if(x!=-1) a[x]=0;
        for(ll i=n-1;i>=0;i--)
        {
            if(a[i]==1) 
            {
                a[i]=0;
                break;
            }
        }
        for(ll i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                one++;
            }
            if(a[i]==0)
            {
                q+=one;
            }
        }
        cout<<max(max(p,q),r)<<endl;
    }
}
