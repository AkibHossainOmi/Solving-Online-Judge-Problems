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
        ll n, a, b, x, y;
        cin>>n>>a>>b>>x>>y;
        cout<<abs(min(min(a-1,n-a),min(b-1,n-b))-min(min(x-1,n-x),min(y-1,n-y)))<<endl;
    }
}