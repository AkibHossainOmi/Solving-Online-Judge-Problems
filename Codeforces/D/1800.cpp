#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, r=0;
        string s;
        cin>>n>>s;
        for(ll i=0; i<s.size()-1; i++) if(s[i]!=s[i+2]) r++;
        cout<<r<<endl;
    }
}