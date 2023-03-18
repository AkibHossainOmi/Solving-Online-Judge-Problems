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
        ll n;
        cin>>n;
        ll a[n], mx=n, mn=1, L=0, R=n-1;
        for(ll i=0; i<n; i++) cin>>a[i];
        while(L<R)
        {
            if(a[L]==mn) mn++, L++;
            else if(a[L]==mx) mx--, L++;
            else if(a[R]==mn) mn++, R--;
            else if(a[R]==mx) mx--, R--;
            else break;
        }
        if(L<R) cout<<L+1<<" "<<R+1<<endl;
        else cout<<"-1\n";
    }
}