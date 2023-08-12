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
        vector<ll> a;
        ll x, op=0, total_decrease=0;
        for(ll i=0; i<n; i++) 
        {
            cin>>x;
            a.push_back(x);
        }
        for(ll i=0; i<n-1; i++) 
        {
            a[i+1]-=total_decrease;
            a[i+1]=max((ll)(0),a[i+1]);
            if(a[i]>a[i+1]) 
            {
                total_decrease+=a[i];
                op+=a[i];
                a[i]=0;
                a[i+1]=0;
            }
        }
        cout<<op<<endl;
    }
}