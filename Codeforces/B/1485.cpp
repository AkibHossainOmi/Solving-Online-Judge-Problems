#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll n, q, k, L, R;
    cin>>n>>q>>k;
    ll a[n+1], Total[n+1];
    for(ll i=1; i<=n; i++) cin>>a[i];
    Total[0]=0;
    for(ll i=2, j=1; i<n; i++, j++) Total[j]=Total[j-1]+a[i+1]-a[i-1]-2;
    for(ll i=0; i<q; i++)
    {
        cin>>L>>R;
        if(L==R) cout<<k-1<<endl;
        else cout<<Total[R-2]-Total[L-1]+a[L+1]-2+k-a[R-1]-1<<endl;
    }
}