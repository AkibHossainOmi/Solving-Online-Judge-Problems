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
        ll a[n], d[n], check=1;
        for(ll i=0;i<n;i++)
        {
            cin>>d[i];
        }

        a[0]=d[0];
        for(ll i=1;i<n;i++)
        {
            if(a[i-1]+d[i]>=0&&a[i-1]-d[i]>=0&&d[i]!=0)
            {
                check=0;
                break;
            }
            else a[i]=a[i-1]+d[i];
        }
        if(check)
        {
            for(ll i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else cout<<"-1\n";
    }
}
