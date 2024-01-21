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
        string a, b, c, result="NO\n";
        cin>>n>>a>>b>>c;
        for(ll i=0; i<n; i++)
        {
            if(c[i]!=a[i]&&c[i]!=b[i])
            {
                result="YES\n";
                break;
            }
        }
        cout<<result;
    }
}