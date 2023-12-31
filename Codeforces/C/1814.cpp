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
        ll n, s1, s2;
        cin>>n>>s1>>s2;
        vector<ll> a(n), r1, r2;
        vector<pair<ll,ll>>  p;
        for(ll i=0; i<n; i++) 
        {
            cin>>a[i];
            p.push_back(make_pair(a[i],i+1));
        }
        sort(p.begin(),p.end());
        ll size1=0, size2=0;
        for(ll i=n-1; i>=0; i--)
        {
            if(p[i].first*(size1+1)*s1<p[i].first*(size2+1)*s2) 
            {
                r1.push_back(p[i].second), size1++;
            }
            else 
            {
                r2.push_back(p[i].second), size2++;
            }
        }
        cout<<size1<<" ";
        for(ll i=0; i<size1; i++) cout<<r1[i]<<" ";
        cout<<endl<<size2<<" "; 
        for(ll i=0; i<size2; i++) cout<<r2[i]<<" ";
        cout<<endl;
    }
}