#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t; 
    cin>>t;
    while(t--)
    {
        ll k,h,w;
        cin>>w>>h;
        cin>>k;
        ll x[200005], y[200005], mx, my, a;
        for(ll i=0;i<k;i++)
        {
            cin>>x[i];
        }
        mx=x[k-1]-x[0];
        cin>>k;
        for(ll i=0;i<k;i++)
        {
            cin>>x[i];
        }
        mx=max(mx,x[k-1]-x[0]);
        cin>>k;
        for(ll i=0;i<k;i++)
        {
            cin>>y[i];
        }
        my=y[k-1]-y[0];
        cin>>k;
        for(ll i=0;i<k;i++)
        {
            cin>>y[i];
        }
        my=max(my,y[k-1]-y[0]);
        a=max(mx*h,my*w);
        cout<<a<<endl;        
    }
}
