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
        ll a[n], s=0, c=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]!=1) s++;
            if(a[i]==1) c++;
        }
        if(c==0) cout<<s<<endl;
        else cout<<s+(int)(c/2)+c%2<<endl;
    }
}