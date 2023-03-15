#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll r, c;
        cin>>r>>c;
        r=abs(r), c=abs(c);
        if(r==c) cout<<2*r<<endl;
        else cout<<max(r,c)*2-1<<endl;
    }
}