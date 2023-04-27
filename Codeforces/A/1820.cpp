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
        ll c=0;
        cin>>s;
        if(s.size()==1&&s[0]=='^') c=1;
        else if(s.size()==1&&s[0]=='_') c=2;
        else
        {
            for(ll i=0; i<s.size(); i++)
            {
                if(s[i]=='_')
                {
                    s[i]='^';
                    if(i==0) c++;
                    else if(s[i-1]!='^') c++;
                    if(i==s.size()-1) c++;
                    else if(s[i+1]!='^') c++;
                }
            }
        }
        cout<<c<<endl;
    }
}