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
        ll n, sumE=0, sumO=0, posE;
        cin>>n;
        vector<ll> a(n+1);
        for(ll i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(ll i=n; i>=1; i--)
        {
            if(i%2==0&&a[i]>=0) sumE+=a[i], posE=i;
            if(i%2!=0&&a[i]>=0) sumO+=sumE+a[i], sumE=0;
        }
        if(sumE!=0)
        {
            ll maxi=a[1];
            for(ll i=1; i<posE; i+=2) maxi=max(maxi,a[i]);
            if(posE>2) sumO+=sumE;
            else sumO+=max(sumE-a[posE], sumE+maxi);
        }
        cout<<sumO<<endl;
    }
}