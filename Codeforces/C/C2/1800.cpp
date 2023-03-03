#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n], r=0, m=0;
        map<ll,ll> s;
        for(ll i=0; i<n; i++) 
        {
            cin>>a[i];
            if(a[i]>0) s[a[i]]++;
            else if(s.size()!=0)
            {
                r+=s.rbegin()->first;
                s[s.rbegin()->first]--;
                if(s.rbegin()->second<=0) s.erase(prev(s.end()));
            }
        }
        cout<<r<<endl;
    }
}