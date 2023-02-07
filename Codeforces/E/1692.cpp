#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, s, r=0;
        cin>>n>>s;
        vector<ll> a(n), p;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==1) p.push_back(i+1), r++;
        }
        if(r==s) cout<<"0\n";
        else if(r<s) cout<<"-1\n";
        else
        {
            r=0;
            for(ll i=s-1; i<p.size(); i++)
            {
                ll FB=0, FL=0;
                if(i<p.size()-1) FL=n-p[i+1]+1;
                if(i!=s-1) FB=p[i-s];
                if(r==0) r=FL+FB;
                else r=min(r,FL+FB);
            }
            cout<<r<<endl;
        }
    }
}
