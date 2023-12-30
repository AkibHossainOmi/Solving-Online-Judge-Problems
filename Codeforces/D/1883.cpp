#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll t=1, x=0;
    cin>>t;
    map<ll,ll> presentL;
    map<ll,ll> presentR;
    while(t--)
    {
        char c;
        ll a, b;
        cin>>c>>a>>b;
        if(c=='+') 
        {
            presentL[a]++;
            presentR[b]++;
            x++;
        }
        else
        {
            presentL[a]--;
            presentR[b]--;
            x--;
            if(presentL[a]==0) presentL.erase(a);
            if(presentR[b]==0) presentR.erase(b);
        }
        if(x>0&&presentL.rbegin()->first>presentR.begin()->first) cout<<"YES\n";
        else cout<<"NO\n";

    }
}