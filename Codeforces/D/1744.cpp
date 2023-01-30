#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t; 
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n], p=0, x=0, s=0, ct[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            while(a[i]%2==0) x++, a[i]=a[i]/2;
        }
        if(x>=n) cout<<"0\n";
        else
        {
            ll y=0, c, j=0;
            for(ll i=2; i<=n; i+=2)
            {
                c=i, y=0;
                while(c%2==0) y++, c=c/2;
                ct[j]=y, j++;
            }
            sort(ct,ct+j);
            reverse(ct,ct+j);
            for(ll i=0; i<j; i++)
            {
                s+=ct[i];
                p++;
                if(s>=n-x) break;
            }
            if(s>=n-x) cout<<p<<endl;
            else cout<<"-1\n";
        }
    }
}