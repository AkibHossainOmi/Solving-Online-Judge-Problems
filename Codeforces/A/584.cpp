#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll n, t, ans=0;
    cin>>n>>t;
    ll x=t, size=0;
    while(x>0)
    {
        x=x/10;
        size++;
    }
    if(size>n) cout<<"-1\n";
    else 
    {
        cout<<t;
        for(ll i=0; i<n-size; i++) cout<<"0";
        cout<<endl;
    }
}