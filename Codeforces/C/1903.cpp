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
        ll n, sum=0, maxSum=0, m=1, s=0;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        for(ll i=0; i<n; i++)
        {
            sum-=a[i];
            s+=a[i];
            if(sum>=0)
            {
                maxSum+=m*s;
                m++;
                s=0;
            }
        }
        cout<<maxSum<<endl;
    }
}
