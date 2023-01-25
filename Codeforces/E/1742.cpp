#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t; 
    cin>>t;
    while(t--)
    {
        ll n, q, m=0, x=0, y=0;
        map<ll,ll> c, h, a;
        vector<ll> ans, unique_h, sort_q;
        cin>>n>>q;
        ans.push_back(0);
        for(ll i=0; i<n;i++)
        {
            cin>>h[i];
            y+=h[i];
            ans.push_back(y);
            x++;
            if(h[i]>m)
            {
                unique_h.push_back(h[i]);
                m=h[i];
                c[m]=x;
            }
            else c[m]++;
        }
        m=0;
        for(ll i=0; i<q;i++)
        {
            cin>>a[i];
            sort_q.push_back(a[i]);
        }
        sort(sort_q.begin(),sort_q.end());
        ll j=0;
        for(ll i=0; i<sort_q.size();i++)
        {
            while(sort_q[i]>=unique_h[j]&&j<unique_h.size()) j++;
            if(sort_q[i]<unique_h[j]) c[sort_q[i]]=c[unique_h[j-1]];
            else if(j==unique_h.size()) c[sort_q[i]]=c[unique_h[j-1]];
        }
        for(ll i=0; i<q;i++)
        {
            cout<<ans[c[a[i]]]<<" ";
        }
        cout<<endl;
    }
}