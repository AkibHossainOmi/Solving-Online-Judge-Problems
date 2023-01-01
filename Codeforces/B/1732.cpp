#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, o=0, r=0, c=0;
        cin>>n;
        string s;
        cin>>s;
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='1') c++;
            if(s[i]=='1'&&o==0) o++;
            if(s[i]=='0'&&o==1) o=0, r++;
        }
        if(c==0||c==n) r=0;
        else
        {
            if(s[n-1]=='1') r=2*r;
            else r=2*r-1;
        }
        cout<<r<<endl;
    }
}
