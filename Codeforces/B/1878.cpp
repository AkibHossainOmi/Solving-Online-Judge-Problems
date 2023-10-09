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
        ll n, x=1;
        cin>>n;
        for(ll i=0; i<n; i++) 
        {
            cout<<x<<" ";
            x+=2;
        }
        cout<<endl;
    }
}