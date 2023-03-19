#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        if(y2<y1) cout<<"-1\n";
        else 
        {
            ll y=y2-y1, newX=x1+y;
            if(x2>newX) cout<<"-1\n";
            else cout<<y+newX-x2<<endl;
        }
    }
}