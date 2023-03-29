#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll t, i=0;
    cin>>t;
    while(t--)
    {
        ll check, m;
        string s;
        cin>>s;
        map<char,ll> count;
        for(ll i=0; i<4; i++)
        {
            count[s[i]]++;
            if(i==0) m=count[s[i]];
            if(count[s[i]]>m) m=count[s[i]];
        }
        if(m==4) cout<<"-1"<<endl;
        else if(m==3) cout<<"6"<<endl;
        else cout<<"4"<<endl;
    }
}