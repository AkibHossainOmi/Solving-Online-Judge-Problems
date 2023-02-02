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
        ll a[n], s=0, sum=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(a[i]>0) s++;
        }
        if(s!=n)
        {
            for(ll i=0; i<n-1; i++)
            {
                if(a[i]==-1&&a[i+1]==-1)
                {
                    a[i]=1, a[i+1]=1;
                    i++;
                    s=-1;
                    sum-=(-2);
                    sum+=2;
                    break;
                }
                else s=0;
            }
        }
        else
        {
            sum-=2;
            sum-=2;
        }
        cout<<sum<<endl;
    }
}
