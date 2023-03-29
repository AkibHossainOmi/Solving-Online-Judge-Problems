#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll m;
        cin>>m;
        map<ll,ll> present, r;
        ll n[m];
        vector<ll> a[m];
        for(ll i=0; i<m; i++)
        {
            cin>>n[i];
            ll p;
            for(ll j=0; j<n[i]; j++)
            {
                cin>>p;
                a[i].push_back(p);
                present[p]++;
            }
        }
        ll flag=1;
        for(ll i=0; i<m; i++)
        {
            for(ll j=0; j<n[i]; j++)
            {
                if(present[a[i][j]]==1) r[i]=a[i][j];
                else present[a[i][j]]--;
            }
            if(r[i]==0) 
            {
                flag=0;
                break;
            }
        }
        if(flag==0) cout<<"-1\n";
        else
        {
            for(ll i=0; i<m; i++) 
            {
                if(i<m-1) cout<<r[i]<<" ";
                else cout<<r[i];
            }
            cout<<endl;
        }
    }
}