#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n;
    cin>>n;
    ll s=0, p[n], a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>p[i];
        a[i]=p[i]/2;
        s+=a[i];
    }
    for(ll i=0;i<n;i++)
    {
        if(s>0&&p[i]<0&&p[i]%2!=0) s--, a[i]--;
        else if(s<0&&p[i]>0&&p[i]%2!=0) s++, a[i]++;
        cout<<a[i]<<endl;
    }
}
