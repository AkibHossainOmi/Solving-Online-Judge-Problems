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
        ll n, k;
        cin>>n>>k;
        k--;
        if(n%2!=0) cout<<(k+k/(n/2))%n+1<<endl;
        else cout<<k%n+1<<endl;
    }
}