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
        ll  n, k, d, count=0, res, temp, daysLeft;
        cin>>n>>k>>d;
        vector<ll> a(n+1), v(k+1);
        for(ll i=1; i<=n; i++)
        {
            cin>>a[i];
            if(a[i]==i) count++;
        }
        for(ll i=1; i<=k; i++)
        {
            cin>>v[i];
        }
        res=count+(d-1)/2, daysLeft=d;
        for(ll i=1; i<min(2*n+1,d); i++)
        {
            ll p=i;
            p=i%k;
            if(p==0) p=k;
            temp=0;
            for(ll j=1; j<=n; j++)
            {
                if(j<=v[p]) a[j]++;
                if(a[j]==j) temp++;
            }
            if(temp>count)
            {
                count=temp;
                daysLeft=d-i;
                res=max(res,count+(daysLeft-1)/2);
            }
        }
        cout<<res<<endl;
    }
}
