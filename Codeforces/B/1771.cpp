#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, m;
        cin>>n>>m;
        ll x[m+1], y[m+1], b[100009]={}, s=0, mx=0;
        for(ll i=0;i<m;i++)
        {
            cin>>x[i]>>y[i];
            if(b[max(x[i],y[i])]<min(x[i],y[i])) b[max(x[i],y[i])]=min(x[i],y[i]);
        }
        for(ll i=2;i<=n;i++)
        {
            if(b[i]<i) mx=max(b[i],mx);
            s+=i-mx-1;
        }
        cout<<s+n<<endl;
    }
}
