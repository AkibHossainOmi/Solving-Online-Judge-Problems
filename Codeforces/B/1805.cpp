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
        ll n, f=0;
        cin>>n;
        string s;
        char c;
        cin>>s;
        c=s[0];
        for(ll i=1; i<n; i++) if(s[i]<=c) c=s[i];
        for(ll i=n-1; i>0; i--)
        {
            if(s[i]==c&&f==0) f=1;
            if(f==1) s[i]=s[i-1];
        }
        s[0]=c;
        cout<<s<<endl;
    }
}