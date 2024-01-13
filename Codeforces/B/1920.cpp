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
        ll n, k, x, sum=0, b=0, maxsum=0;
        cin>>n>>k>>x;
        vector<ll> a(n), a1, a2;
        for(ll i=0; i<n; i++) cin>>a[i];
        sort(a.rbegin(), a.rend());
        for(ll i=0; i<n; i++)
        {
            if(b<x) sum+=a[i]*(-1), b++;
            else sum+=a[i];
        }
        maxsum=sum;
        for(ll i=0; i<n; i++)
        {
            if(i<k)
            {
                if(b<n) 
                {
                    sum=sum+a[i]-(2*a[b]);
                    b++;
                }
                else sum+=a[i];
            }
            maxsum=max(sum, maxsum);
        }
        cout<<maxsum<<endl;
    }
}