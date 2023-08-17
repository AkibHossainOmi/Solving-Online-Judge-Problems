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
        ll a, b, c;
        cin>>a>>b>>c;
        ll Need1, Need2;
        if(c%2!=0) Need1=c/2+1+a, Need2=c/2+b;
        else Need1=c/2+a, Need2=c/2+b;
        if(Need1>Need2) cout<<"First\n";
        else cout<<"Second\n";
    }
}