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
        ll a, b, c;
        cin>>a>>b>>c;
        if(a+b>=10) cout<<"YES\n";
        else if(b+c>=10) cout<<"YES\n";
        else if(a+c>=10) cout<<"YES\n";
        else cout<<"NO\n";
    }
}