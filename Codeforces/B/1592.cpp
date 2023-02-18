#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, x;
        cin>>n>>x;
        ll a[n], i;
        vector<ll> s, p;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            s.push_back(a[i]);
            if(i-x<0&&i+x>n-1) p.push_back(i);
        }
        sort(s.begin(),s.end());
        for(i=0; i<p.size(); i++)
        {
            if(a[p[i]]!=s[p[i]]) break;
        }
        if(i==p.size()) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
