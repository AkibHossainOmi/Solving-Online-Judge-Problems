#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll t;
    cin>>t;
    while(t--)
    {
        string s, c;
        ll r=0;
        c+="codeforces";
        cin>>s;
        for(ll i=0; i<s.size(); i++)
        {
            if(s[i]!=c[i]) r++;
        }
        cout<<r<<endl;
    }
}