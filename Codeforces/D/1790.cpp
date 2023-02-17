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
        ll a[n], unique[n], count=0, L=0, Max=0, size=0;
        map<ll,ll> Item;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            Item[a[i]]++;
            if(Item[a[i]]==1) unique[size]=a[i], size++;
        }
        sort(unique,unique+size);
        for(ll i=0; i<size; i++)
        {
            if(i>0&&unique[i]-unique[i-1]!=1) L=0;
            Max=Item[unique[i]];
            if(Max-L>0) count+=Max-L;
            L=Max;
        }
        cout<<count<<endl;
    }
}
