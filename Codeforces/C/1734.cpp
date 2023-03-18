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
        ll n, cost=0;
        string s;
        cin>>n>>s;
        vector<ll> absent(n+1);
        for(ll i=0; i<s.size(); i++)
        {
            if(s[i]=='0') 
            {
                for(ll j=i+1; j<=n; j+=(i+1))
                {
                    if(s[j-1]!='0') break;
                    if(absent[j]==0) absent[j]=1, cost+=(i+1);
                }
            }
        }
        cout<<cost<<endl;
    }
}