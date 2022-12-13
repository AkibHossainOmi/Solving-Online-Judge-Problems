#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, i, c[700]={};
        cin>>n;
        char s[n+1];
        cin>>s;
        for(i=0;i<n-1;i++)
        {
            c[s[i+1]-96+26*(s[i]-97)]++;
            if(c[s[i+1]-96+26*(s[i]-97)]==2) break;
            if(s[i]==s[i+1]&&s[i+1]==s[i+2]) i++;
        }
        if(c[s[i+1]-96+26*(s[i]-97)]==2) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
