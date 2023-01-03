#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, c=0;
        cin>>n;
        string s, cs;
        cin>>s;
        cs=s;
        sort(cs.begin(),cs.end());
        if(s==cs) cout<<"0\n";
        else
        {
            cout<<"1\n";
            for(ll i=0;i<n;i++)
            {
                if(s[i]!=cs[i]) c++;
            }
            cout<<c<<" ";
            for(ll i=0;i<n;i++)
            {
                if(s[i]!=cs[i]) cout<<i+1<<" ";
            }
            cout<<endl;
        }
    }
}