#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t; 
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s[2*n], r, cr;
        for(ll i=0; i<2*n-2; i++)
        {
            cin>>s[i];
            if(s[i].size()==n-1) r+=s[i];
        }
        cr=r;
        reverse(r.begin(),r.end());
        if(r==cr) cout<<"YES\n";
        else cout<<"NO\n";
    }
}