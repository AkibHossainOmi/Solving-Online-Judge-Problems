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
        ll a[n], b[n], c[n], flag=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll x=0, y=0;
        b[0]=a[0];
        x++;
        for(ll i=1; i<n; i++)
        {
            flag=1;
            for(ll j=0; j<x; j++)
            {
                if(b[j]%a[i]==0) 
                {
                    flag=0;
                    b[x]=a[i];
                    x++;
                    break;
                }
            }
            if(flag)
            {
                c[y]=a[i];
                y++;
            }
        }
        
        if(x>0&&y>0)
        {
            cout<<x<<" "<<y<<endl;
            for(ll i=0; i<x; i++) cout<<b[i]<<" ";
            cout<<endl;
            for(ll i=0; i<y; i++) cout<<c[i]<<" ";
            cout<<endl;
        }
        else cout<<"-1\n";
    }
}