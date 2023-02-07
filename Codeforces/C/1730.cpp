#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s, c, r;
        cin>>s;
        ll a[100]={};
        c=s;
        sort(c.begin(),c.end());
        ll j=c.size()-1;
        for(ll i=s.size()-1; i>=0; i--) a[s[i]]++;
        for(ll i=s.size()-1; i>=0; i--)
        {
            while(i>=0&&a[s[i]]==0)
            {
                i--;
            }
            if(s[i]==c[j])
            {
                r.push_back(s[i]);
                a[s[i]]--;
            }
            else
            {
                a[c[j]]--;
                c[j]++;
                r.push_back(min(c[j],'9'));
                i++;
            }
            j--;
            if(j==-1) break;
        }
        sort(r.begin(),r.end(),greater<ll>());
        for(ll i=r.size()-1; i>=0; i--)
        cout<<r[i];
        cout<<endl;
    }
}
