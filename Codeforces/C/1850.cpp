#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll t=1;
    cin>>t;
    while(t--)
    {
        string s[9], ans;
        for(ll i=0; i<8; i++) cin>>s[i];
        for(ll i=0; i<8; i++)
        {
            for(ll j=0; j<8; j++)
            {
                if(s[i][j]!='.') ans.push_back(s[i][j]);
            }
        }
        cout<<ans<<endl;
    }
}