#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b, c;
        cin>>a>>b>>c;
        ll x=abs(a-1), y=abs(c-b)+abs(c-1);
        if(x<y) cout<<"1"<<endl;
        else if(x>y) cout<<"2"<<endl;
        else cout<<"3"<<endl;
    }
}
