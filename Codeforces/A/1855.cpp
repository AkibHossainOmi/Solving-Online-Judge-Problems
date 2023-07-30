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
        ll a[n+7], matched=0, moves=0;
        for(ll i=1; i<=n; i++)
        {
            cin>>a[i];
            if(i==a[i]) matched++; 
        }
        if(matched==0) moves=0;
        else 
        {
            if(matched%2==0) moves=matched/2;
            else moves=matched/2+1;
        }
        cout<<moves<<endl;
    }
}