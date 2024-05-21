#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds; 
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

vector<ll> sol(vector<ll> slime)
{
    ll n = slime.size()-1;
    vector<ll> sum(n+1), check(n+1), time(n+1);
    for(ll i=1; i<=n; i++)
    {
        sum[i] = sum[i-1] +slime[i];
        if(i>0 && slime[i]==slime[i-1]) check[i] = check[i-1] + 1;
    }
    time[n] = -1;
    for(ll i=1; i<=n; i++)
    {
        ll L = i+1, R = n, M, t=-1, st = i+1;
        while(L<=R)
        {
            M = (L+R)/2;
            if((check[M]-check[st]==M-(st)&&M-st>0)||sum[M]-sum[st-1]<=slime[i]) 
            {
                if(slime[M]<=slime[i]) L = M+1;
                else
                {
                    t = 1;
                    R = L-1;
                }
            }
            else
            {
                t = M-st+1;
                R = M-1;
            }
        }
        time[i] = t;
    }
    return time;
}

int main()
{
    FastIO;
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> slime(n+1), time1(n+1), time2(n+1), time(n+1);
        for(ll i=1; i<=n; i++) cin>>slime[i];
        time1 = sol(slime);
        reverse(slime.begin()+1,slime.end());
        time2 = sol(slime);
        reverse(time2.begin()+1,time2.end());
        for(ll i=1; i<=n; i++)
        {
            if(time1[i]!=-1&&time2[i]!=-1) time[i] = min(time1[i], time2[i]);
            else time[i] = max(time1[i], time2[i]);
            cout<<time[i]<<" ";
        }
        cout<<endl;
    }
}
