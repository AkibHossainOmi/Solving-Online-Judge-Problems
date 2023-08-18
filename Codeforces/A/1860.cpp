#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

ll isMatch(string s1, string s2)
{
    ll flag=1;
    for(ll i=0; i<s1.size(); i++)
    {
        if(s1.size()-i<s2.size()) break;
        ll p=i;
        flag=1;
        for(ll j=0; j<s2.size(); j++)
        {
            if(s1[p]!=s2[j])
            {
                flag=0;
                break;
            }
            // cout<<s1[p];
            p++;
        }
        // cout<<endl;
        if(flag) break;
    }
    return flag;
}

int main()
{
    FastIO;
    ll t=1;
    cin>>t;
    while(t--)
    {
        string s, s1, s2;
        cin>>s;
        for(ll i=0; i<s.size(); i++) s1.push_back('('), s1.push_back(')');
        for(ll i=0; i<s.size(); i++) s2.push_back('(');
        for(ll i=0; i<s.size(); i++) s2.push_back(')');
        if(!isMatch(s1,s)) cout<<"YES\n"<<s1<<endl;
        else if(!isMatch(s2,s)) cout<<"YES\n"<<s2<<endl;
        else cout<<"NO\n";
    }
}