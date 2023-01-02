#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n, r=0, m=0, p;

        cin>>n;
        string s;

        ll a[n];
        cin>>s;

        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(ll i=n-1; i>=0; i--)
        {
            if(s[i]=='1'||(s[i]=='0'&&s[i+1]=='1'))
            {
                if(m==0) m=a[i], p=i;
                else if(a[i]<m) m=a[i], p=i;
            }

            if(s[i+1]=='1'&&s[i]=='0') s[i]='1', s[p]='0', m=0;
        }

        for(ll i=0; i<n; i++)
        {
            if(s[i]=='1') r+=a[i];
        }

        cout<<r<<endl;
    }
}
