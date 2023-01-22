#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t; 
    cin>>t;
    while(t--)
    {
        ll r=1, s=0, m=1000000007, n;
        cin>>n;
        for(ll i=1;i<=n;i++)
        {
            r*=i;
            r%=m;
        }
        s=((((n-1)*n)%m)*r)%m;
        cout<<s<<endl;
    }
}