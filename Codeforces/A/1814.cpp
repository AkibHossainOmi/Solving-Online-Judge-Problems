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
        ll n, k, f=0;
        cin>>n>>k;
        for(ll i=0; i<=k; i++)
        {
            if((n-(k*i))%2==0) 
            {
                f=1;
                break;
            }
            if(k*i>n) break;
        }
        if(f==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}