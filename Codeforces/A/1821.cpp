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
        string s;
        cin>>s;
        ll c=0, Total=1, f=1;
        for(ll i=0; i<s.size(); i++)
        {
            c=0;
            if(s[i]=='?') 
            {
                c=10;
                if(i==0) c--;
            }
            if(s[i]=='0'&&i==0) f=0;
            if(c>0) Total*=c;
        }
        if(f==0) Total=0;
        cout<<Total<<endl;
    }
}