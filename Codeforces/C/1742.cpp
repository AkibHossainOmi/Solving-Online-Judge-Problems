#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        char s[9][9];
        ll r, b;
        for(ll i=0; i<8; i++)
        {
            cin>>s[i];
        }
        
        for(ll i=0; i<8; i++)
        {
            r=0, b=0;
            for(ll j=0; j<8; j++)
            {
                if(s[i][j]=='R') r++;
            }
            if(r==8) break;
            for(ll j=0; j<8; j++)
            {
                if(s[j][i]=='B') b++;
            }
            if(b==8) break;
        }
        
        if(r==8) cout<<"R\n";
        else cout<<"B\n";
    }
}
