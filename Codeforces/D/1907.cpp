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
        ll n;
        cin>>n;
        vector<ll> l(n), r(n);
        for(ll i=0; i<n; i++) cin>>l[i]>>r[i];
        ll L=0, H=1e9, M, currL, currR, nextL, nextR, flag, res;
        while(L<=H)
        {
            M=(L+H)/2;
            currL=0, currR=0, flag=1;
            for(ll i=0; i<n; i++)
            {
                nextL=l[i], nextR=r[i];
                if((nextR<currL&&currL-nextR>M)||(nextL>currR&&nextL-currR>M)) 
                {
                    flag=0;
                    break;
                }
                currL=max(currL-M,nextL);
                currR=min(currR+M,nextR);
            }
            if(flag)
            {
                res=M;
                H=M-1;
            }
            else
            {
                L=M+1;
            }
        }
        cout<<res<<endl;
    }
}