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
        ll n;
        cin>>n;
        deque<ll> a[n];
        ll x, m, sum=0, firstmini, secondmini;
        for(ll i=0; i<n; i++)
        {
            cin>>m;
            for(ll j=0; j<m; j++)
            {
                cin>>x;
                a[i].push_back(x);
            }
            sort(a[i].begin(),a[i].end());
            if(i==0) firstmini=a[i][0], secondmini=a[i][1];
            else firstmini=min(firstmini,a[i][0]), secondmini=min(secondmini,a[i][1]);
            sum+=a[i][1];
        }
        cout<<sum-secondmini+firstmini<<endl;
    }
}