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
        ll keep=0;
        for(ll i=0; i<s.size()-1; i++)
        {
            if(s[i]==s[i+1]) keep+=2, i++;
            else
            {
                map<char,ll> count; 
                while(i<s.size()&&count[s[i]]==0)
                {
                    count[s[i]]=1;
                    i++;
                }
                if(i<s.size()) keep+=2;
            }
        }
        cout<<s.size()-keep<<endl;
    }
}