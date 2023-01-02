#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, a, b;
        cin>>n>>a>>b;
        if(a>b) cout<<"1"<<endl;
        else
        {
            if(n%a==0) cout<<n/a<<endl;
            else cout<<1+n/a<<endl;
        }
    }
}