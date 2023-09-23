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
        double c=log2(n);
        ll d=c;
        if(c-d>0)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
}