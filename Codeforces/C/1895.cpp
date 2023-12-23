#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

bool cmp(string &a, string &b)
{
    return a.size()<b.size();
}
int main()
{
    FastIO;
    ll n;
    cin>>n;
    vector<string> s(n);
    map<pair<ll,ll>,ll> present;
    for(ll i=0; i<n; i++)
    {
        cin>>s[i];
    }
    sort(s.begin(),s.end(),cmp);
    ll res=n;
    for(auto str:s)
    {
        ll len1=str.size();
        for(ll len2=1; len2<=len1; len2++)
        {
            ll len=len1+len2;
            if(len%2==0)
            {
                ll first_half=0, second_half=0;
                for(ll i=0; i<len/2; i++) first_half+=str[i];
                for(ll i=len/2; i<len1; i++) second_half+=str[i];
                ll required=first_half-second_half;
                if(required>=0) res+=present[{len2,required}];
            }
        }
        reverse(str.begin(),str.end());
        for(ll len2=1; len2<=len1; len2++)
        {
            ll len=len1+len2;
            if(len%2==0)
            {
                ll first_half=0, second_half=0;
                for(ll i=0; i<len/2; i++) first_half+=str[i];
                for(ll i=len/2; i<len1; i++) second_half+=str[i];
                ll required=first_half-second_half;
                if(required>=0) res+=present[{len2,required}];
            }
        }
        ll sum=0;
        for(ll i=0; i<str.size(); i++) sum+=str[i];
        present[{len1,sum}]++;
    }
    cout<<res<<endl;
}
