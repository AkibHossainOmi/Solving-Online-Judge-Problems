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
        ll n, max_interval=0;
        cin>>n;
        for(ll i=1; i<=n; i++)
        {
            if(n%i==0) max_interval++;
            else break;
        }
        cout<<max_interval<<endl;
    }
}