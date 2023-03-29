#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n], b[n], m1, m2;
        for(ll i=0; i<n; i++) 
        {
            cin>>a[i];
            if(i==0) m1=a[i];
            if(a[i]>m1) m1=a[i];
        }
        for(ll i=0; i<n; i++) 
        {
            cin>>b[i];
            if(i==0) m2=b[i];
            if(b[i]>m2) m2=b[i];
        }
        if(m1==a[n-1]&&m2==b[n-1]) cout<<"YES\n";
        else if(m2!=b[n-1])
        {
            for(ll i=0; i<n; i++) 
            {
                if(b[i]>b[n-1]) swap(a[i], b[i]);
            }
            for(ll i=0; i<n; i++) 
            {
                if(i==0) m1=a[i];
                if(a[i]>m1) m1=a[i];
            }
            for(ll i=0; i<n; i++) 
            {
                if(i==0) m2=b[i];
                if(b[i]>m2) m2=b[i];
            }
            if(m1==a[n-1]&&m2==b[n-1]) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else
        {
            for(ll i=0; i<n; i++) 
            {
                if(a[i]>a[n-1]) swap(a[i], b[i]);
            }
            for(ll i=0; i<n; i++) 
            {
                if(i==0) m1=a[i];
                if(a[i]>m1) m1=a[i];
            }
            for(ll i=0; i<n; i++) 
            {
                if(i==0) m2=b[i];
                if(b[i]>m2) m2=b[i];
            }
            if(m1==a[n-1]&&m2==b[n-1]) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}