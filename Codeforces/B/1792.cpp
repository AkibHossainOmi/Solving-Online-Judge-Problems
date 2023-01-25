#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t; 
    cin>>t;
    while(t--)
    {
        ll a[4], s=0;
        for(ll i=0; i<4; i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        if(a[0]==0)
        {
            if(s>0) cout<<"1\n";
            else cout<<"0\n";
        }
        else if(a[1]==0||a[2]==0) 
        {
            if(s-a[0]>=a[0]+1) cout<<a[0]*2+1<<endl;
            else cout<<a[0]+s-a[0]<<endl;
        }
        else
        {
            if(s-min(a[1],a[2])*2-a[0]>=a[0]+1) cout<<a[0]*2+1+min(a[1],a[2])*2<<endl;
            else cout<<a[0]+s-min(a[1],a[2])*2-a[0]+min(a[1],a[2])*2<<endl;
        }
    }
}