#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k, q=0, p=0;
        string s, r;
        cin>>n>>k>>s;
        ll c[200]={}, d[200]={};
        for(ll i=0; i<s.size(); i++) c[s[i]]++;
        for(ll i=0; i<s.size(); i++) 
        {
            s[i]=tolower((int)s[i]);
            d[s[i]]++;
            if(d[s[i]]==1) r.push_back(s[i]);
        }
        for(ll i=0; i<r.size(); i++) 
        {
            char x=toupper((int)r[i]);
            q+=min(c[r[i]],c[x]);
            //cout<<abs(c[r[i]]-c[x])<<endl;
            if(abs(c[r[i]]-c[x])%2!=0) p+=abs(c[r[i]]-c[x])-1;
            else p+=abs(c[r[i]]-c[x]);
        }
        while(p<2*k) k--;
        cout<<q+k<<endl;
    }
}