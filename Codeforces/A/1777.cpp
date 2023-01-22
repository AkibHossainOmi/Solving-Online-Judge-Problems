#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t; 
    cin>>t;
    while(t--)
    {
        ll n, r=0;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=1;i<n;i++)
        {
            if(a[i-1]%2==1&&a[i]%2==1) r++;
            else if(a[i-1]%2==0&&a[i]%2==0) r++;
        }
        cout<<r<<endl;
    }
}