#include<bits/stdc++.h>
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
        ll a[n], e=0, o=0;
        vector<ll> ev, od;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0) e++, ev.push_back(i+1);
            else o++, od.push_back(i+1);
        }
        if(o>=3||(o>0&&o<3&&e>=2)) 
        {
            cout<<"YES\n";
            if(o>=3)
            {
                for(ll i=0;i<3;i++)
                cout<<od[i]<<" ";
                cout<<endl;
            }
            else
            {
                cout<<od[0]<<" ";
                for(ll i=0;i<2;i++)
                cout<<ev[i]<<" ";
                cout<<endl;
            }
        }
        else cout<<"NO\n";
    }
}