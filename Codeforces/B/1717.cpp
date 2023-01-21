#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k, r, c, j=0;
        cin>>n>>k>>r>>c;
        char L[n+2][n+2];
        vector<ll> a;
        c%=k;
        if(c==0) c=k;
        a.push_back(c);
        for(ll i=1;i<=k;i++)
        {
            if(i!=c) a.push_back(i);
        }
        for(ll i=1;i<=n;i++)
        {
            for(ll o=1;o<=n;o++)
            {
                L[i][o]='.';
            }
        }
        for(ll i=r;i<=n;i++,j++)
        {
            if(j==k) j=0;
            for(ll o=a[j];o<=n;o+=k)
            {
                L[i][o]='X';
            }
        }
        reverse(a.begin(),a.end()), j=0;
        for(ll i=r-1;i>=1;i--,j++)
        {
            if(j==k) j=0;
            for(ll o=a[j];o<=n;o+=k)
            {
                L[i][o]='X';
            } 
        }
        for(ll i=1;i<=n;i++)
        {
            for(ll o=1;o<=n;o++)
            {
                cout<<L[i][o];
            }
            cout<<endl;
        }
    }
}