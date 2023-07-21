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
        ll a[n], b[n], m=-1, w;
        for(ll i=0; i<n; i++) 
        {
            cin>>a[i]>>b[i];
            if(a[i]<=10)
            {
                if(b[i]>m) m=b[i], w=i+1;
            }
        }
        cout<<w<<endl;
    }
}