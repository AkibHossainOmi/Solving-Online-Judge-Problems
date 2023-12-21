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
        string s;
        cin>>n>>s;
        unordered_map<char,ll> present;
        ll max_present = 0;
        for(ll i = 0; i < n; i++)
        {
            present[s[i]]++;
            max_present = max(max_present, present[s[i]]);
        }
        ll res = max_present - (n - max_present);
        if(res>0) cout<<res<<endl;
        else if(n%2==0) cout<<0<<endl;
        else cout<<1<<endl;
    }
}
