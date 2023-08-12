#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

ll isPossibleX(vector<ll> a, ll k, ll x)
{
    for(ll i=0; i<a.size(); i++)
    {
        ll n=x, op=0, check=0;
        for(ll j=i; j<a.size(); j++)
        {
            if(a[j]>=n) 
            {
                check=1;
                break;
            }
            else 
            {
                op+=n-a[j];
                if(op>k) break;
            }
            n--;
        }
        if(op<=k&&check==1) return x;
    }
    return 0;
}
int main()
{
    FastIO;
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n, k, x, maxi=0;
        cin>>n>>k;
        vector<ll> a;
        for (ll i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
            maxi=max(x,maxi);
        }
        maxi+=k;
        ll left=0, right=maxi, mid=(left+right)/2;
        while(left<=right)
        {
            if(!isPossibleX(a,k,mid)) 
            {
                right=mid-1;
            }
            else if(isPossibleX(a,k,mid)) 
            {
                left=mid+1;
            }
            mid=(left+right)/2;
        }
        cout<<mid<<endl;
    }
}