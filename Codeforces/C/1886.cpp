#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll t=1;
    cin>>t;
    string res;
    while(t--)
    {
        string s;
        ll n, cnt=0, m;
        cin>>s>>n;
        map<char,ll> deleted;
        stack<char> removal;
        m=s.size();
        ll i=0;
        while(cnt+m<n)
        {
            if(removal.size()==0||(i<s.size()&&removal.top()<=s[i]))
            {
                removal.push(s[i]);
                i++;
            }
            else
            {
                deleted[removal.top()]++;
                removal.pop();
                cnt+=m;
                m--;
            }

        }
        ll left=0;
        for(i=0; i<s.size(); i++)
        {
            if(deleted[s[i]]==0&&i+1+cnt+left==n) 
            {
                res+=s[i];
                break;
            }
            else if(deleted[s[i]]!=0) deleted[s[i]]--, left--;
        }
    }
    cout<<res<<endl;
}