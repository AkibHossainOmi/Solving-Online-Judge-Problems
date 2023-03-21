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
        ll n;
        cin>>n;
        ll a[n], x=1, f=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        if(a[0]!=1) f=1;
        else
        {
            for(ll i=1; i<n; i++)
            {
                if(a[i]>x||a[0]!=1) 
                {
                    f=1;
                    break;
                }
                x+=a[i];
            }
        }
        if(f==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;    
    }
}