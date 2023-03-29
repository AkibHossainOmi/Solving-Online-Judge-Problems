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
        ll n, check=1;
        cin>>n;
        string s1, s2;
        char c1='0', c2='0';
        cin>>s1>>s2;
        for(ll i=0; i<n; i++)
        {
            if(s1[i]==s2[i]&&s1[i]=='W') 
            {
                check=0;
                break;
            }
            else if(s1[i]!=s2[i]) 
            {
                if(c1!='0'&&s1[i]!=c1)
                {
                    check=0;
                    break;
                }
                c1=s1[i], c2=s2[i];
            }
            else 
            {
                swap(c1,c2);
            }
        }
        if(check) cout<<"YES\n";
        else cout<<"NO\n";
    }
}