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
        ll n, x, y, player=1, flag=1;
        cin>>n>>x>>y;
        map<ll,ll> result;
        for(ll i=2; i<=n; i++)
        {
            result[player]++;
            if(result[player]==x||result[player]==y) player=i+1;
        }
        for(ll i=1; i<=n; i++)
        {
            if(result[i]!=x&&result[i]!=y) 
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            for(ll i=1; i<=n; i++)
            {
                if(result[i]>0)
                {
                    while(result[i]--)
                    {
                        cout<<i<<" ";
                    }
                }
            }
        }
        else cout<<"-1";
        cout<<endl;
    }
}