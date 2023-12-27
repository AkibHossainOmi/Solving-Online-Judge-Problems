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
        ll n, q, last;
        cin>>n>>q;
        vector<ll> d(q+1);
        map<ll,ll> present;
        for(ll j=1; j<n; j++)
        {
            cout<<j<<" "<<j+1<<endl;
        }
        last=n-1;
        present[last]=1;
        for(ll i=1; i<=q; i++)
        {
            cin>>d[i];
            if(present[d[i]])
            {
                cout<<-1<<" "<<-1<<" "<<-1<<endl;
            }
            else
            {
                cout<<n<<" "<<last<<" "<<d[i]<<endl;
                present[last]=0;
                present[n-last]=0;
                last=d[i];
                present[last]=1;
                present[n-last]=1;
            }
        }
    }
}
