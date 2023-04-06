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
        ll b[n];
        for(ll i=0; i<n-1; i++)
        {
            cin>>b[i];
            if(i==0) cout<<b[i]<<" ";
            else cout<<min(b[i],b[i-1])<<" ";
        }
        cout<<b[n-2]<<endl;
    }
}        