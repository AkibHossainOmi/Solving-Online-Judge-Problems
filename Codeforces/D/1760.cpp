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
        ll a[n], c=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(i>0&&a[i]>a[i-1]&&c==0) c=1;
            if(i>0&&a[i]<a[i-1]&&c==1) c=-1;
        }
        if(c==-1) cout<<"NO\n";
        else cout<<"YES\n";
    }
}
