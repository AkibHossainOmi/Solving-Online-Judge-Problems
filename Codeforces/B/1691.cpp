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
        ll check=0, a[n+1], x, b[n+1];
        for(ll i=1;i<=n;i++)
            b[i]=i;
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
            if(i>1&&check!=-1)
            {
                if(a[i]==a[i-1]) check++;
                else if(check==0) check=-1;
                else check=0;
            }
        }

        if(check==-1||check==0) cout<<"-1"<<endl;
        else
        {
            for(ll i=1;i<n;i++)
            {
                if(a[i]==a[i+1]) x=b[i], b[i]=b[i+1], b[i+1]=x;
            }
            for(ll i=1;i<=n;i++)
                cout<<b[i]<<" ";
            cout<<endl;
        }
    }
}
