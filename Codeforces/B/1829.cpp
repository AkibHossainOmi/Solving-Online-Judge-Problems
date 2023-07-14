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
        ll a[n+1], e=0, maxe=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==0) e++, maxe=max(e,maxe);
            else e=0; 
        }
        cout<<maxe<<endl;
    }
}