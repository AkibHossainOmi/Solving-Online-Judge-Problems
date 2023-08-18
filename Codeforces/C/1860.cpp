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
        ll n, e, lucky=0;
        cin>>n;
        vector<ll> a;
        for(ll i=0; i<n; i++)
        {
            cin>>e;
            a.push_back(e);
        }
        ll maxi=0, mini=a[0];
        for(ll i=1; i<n; i++)
        {
            if(a[i]>mini&&(a[i]<maxi||maxi==0)) lucky++, maxi=a[i];
            if(a[i]<mini) mini=a[i];
        }
        cout<<lucky<<endl;
    }
}