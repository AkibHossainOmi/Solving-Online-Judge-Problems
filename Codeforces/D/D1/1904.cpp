#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n, flag=1;
        cin>>n;
        vector<ll> a(n), b(n);
        for(ll i=0; i<n; i++) cin>>a[i];
        for(ll i=0; i<n; i++) cin>>b[i];
        for(ll i=0; i<n; i++)
        {
            if(a[i]>b[i]||flag==0) 
            {
                flag=0;
                break;
            }
            else if(a[i]<b[i]) flag=0;
            for(ll j=i; j>=0; j--)
            {
                if(a[j]==b[i]) 
                {
                    flag=1;
                    break;
                }
                if(a[j]>b[i]||b[i]>b[j])
                {
                    break;
                } 
            }
            if(flag==0)
            {
                for(ll j=i+1; j<n; j++)
                {
                    if(a[j]==b[i]) 
                    {
                        flag=1;
                        break;
                    }
                    if(a[j]>b[i]||b[i]>b[j])
                    {
                        break;
                    } 
                }
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
