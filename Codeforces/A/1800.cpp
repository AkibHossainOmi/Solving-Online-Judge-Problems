#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s, r;
        ll n;
        cin>>n;
        cin>>s;
        ll c[200]={};
        for(ll i=0; i<s.size(); i++) s[i]=tolower(s[i]);  
        for(ll i=0; i<s.size(); i++)
        {
            if(i>0&&s[i]!=s[i-1])
            {
                c[s[i-1]]=0;
            }
            c[s[i]]++;
            if(c[s[i]]==1) r.push_back(s[i]);
        }
        if(r=="meow") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}