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
        ll n, m, s=0;
        cin>>n>>m;
        ll a[m][n];
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                cin>>a[j][i];
            }
        }
        for(ll i=0; i<m; i++)
        {
            sort(a[i],a[i]+n);
            for(ll j=0; j<n; j++)
            {
                s+=j*a[i][j]-(n-j-1)*a[i][j];
            }
        }
        cout<<s<<endl;
    }
}