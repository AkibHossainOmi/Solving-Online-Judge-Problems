#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll n;
    cin>>n;
    ll s[n+1], note=0;
    for(ll i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]>b&&s[i]<c) note++;
    }
    cout<<note<<endl;
}
