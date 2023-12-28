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
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin>>a[i];
        ll opt=0, current=a[n-1];
        for(ll i=n-2; i>=0; i--)
        {
            if(a[i]>current) 
            {
                opt+=ceil((double)a[i]/current)-1;
                current=a[i]/ceil((double)a[i]/current);
            }
            else current=a[i];
        }
        cout<<opt<<endl;
    }
}
