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
        ll a[n], check=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(i>0&&a[i]!=a[i-1]) check=1; 
        }
        if(check==0)
        {
            cout<<"NO\n";
            continue;
        }
        else cout<<"YES\n";
        sort(a,a+n);
        ll x=0, y=n-1;
        while(x<=y)
        {
            if(x==y) cout<<a[y]<<" ";
            else 
            {
                cout<<a[x]<<" ";
                cout<<a[y]<<" ";
            }
            x++;
            y--;
        }
        cout<<endl;
    }
}
