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
        string s;
        cin>>s;
        ll f=0;
        for(ll i=0; i<n; i+=2)
        {
            for(ll j=1; j<n; j+=2)
            {
                if(s[i]==s[j])
                {
                    f=1;
                    break;
                }
            }
            if(f==1) break;
        }
        if(f==1) cout<<"NO\n";
        else cout<<"YES\n";
    }
}