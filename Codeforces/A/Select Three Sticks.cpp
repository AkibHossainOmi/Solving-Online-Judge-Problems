#include<iostream>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+1];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int m;
        for(ll i=0; i<n; i++)
        {
            for(ll j=i+1; j<n; j++)
            {
                for(ll k=j+1; k<n; k++)
                {
                    ll v1=abs(a[i]-a[j])+abs(a[i]-a[k]);
                    ll v2=abs(a[j]-a[i])+abs(a[j]-a[k]);
                    ll v3=abs(a[k]-a[i])+abs(a[k]-a[j]);
                    ll v=min(v1,v2);
                    v=min(v,v3);
                    if(i==0&&j==i+1&&k==j+1) m=v;
                    else if(v<m) m=v;
                }
            }
        }
        cout<<m<<endl;
    }
}
