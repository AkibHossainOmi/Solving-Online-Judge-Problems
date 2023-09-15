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
        ll x, y, n, s=0, flag=1;
        cin>>x>>y>>n;
        ll a[n], b[n];
        a[0]=x, a[n-1]=y;
        y--;
        for(ll i=n-2; i>=1; i--)
        {
            a[i]=y-s;
            y=a[i];
            if(a[i]<=x) 
            {
                flag=0;
                break;
            }
            y--, s++;
        }
        if(flag=1)
        {
            for(ll i=0; i<n-1; i++) b[i]=a[i+1]-a[i];
            for(ll i=0; i<n-2; i++)
            {            
                if(b[i]<=b[i+1])
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag==0) cout<<"-1";
        else 
        {
            for(ll i=0; i<n; i++) cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}