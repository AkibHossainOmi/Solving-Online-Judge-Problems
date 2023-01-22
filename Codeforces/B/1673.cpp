#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t; 
    cin>>t;
    while(t--)
    {
        string s, p;
        ll c=0, check=1, x=0;
        map<ll,ll> m, n;
        cin>>s;
        for(ll i=0; i<s.size(); i++)
        {
            m[s[i]]++;
            if(m[s[i]]==1) c++;
        }

        for(ll i=0; i<c; i++)
        {
            p.push_back(s[i]);
            n[s[i]]++;
            if(n[s[i]]==2)
            {
                check=0;
                break;
            }
        }
        if(check==1)
        {
            for(ll i=c;i<s.size();i++)
            {
                if(i%c==0) x=0;
                if(s[i]!=p[x]) 
                {
                    check=0;
                    break;
                }
                x++;
            }
        }
        if(check==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
