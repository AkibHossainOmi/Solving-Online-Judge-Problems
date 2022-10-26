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
        ll dt[n+1], agun[n+1], borof[n+1], d[n+1];
        for(ll i=0;i<n;i++)
        {
            cin>>dt[i];
        }
        ll sum=0, f=0, w=0;
        for(ll i=0;i<n;i++)
        {
            cin>>d[i];
            sum+=d[i];
            if(dt[i]==0) agun[f]=d[i],f++;
            else borof[w]=d[i], w++;
        }
        sort(d,d+n);
        if(f==0||w==0)
        {
            cout<<sum<<endl;
            continue;
        }
        ll m=abs(f-w), e=0, dm;
        if(f>w)
        {
            sort(agun,agun+f);
            for(ll i=0;i<m;i++)
            {
                sum-=agun[i];
                e+=agun[i];
            }
            dm=sum*2+e;
        }
        else if(w>f)
        {
            sort(borof,borof+w);
            for(ll i=0;i<m;i++)
            {
                sum-=borof[i];
                e+=borof[i];
            }
            dm=sum*2+e;
        }
        else dm=d[0]+2*(sum-d[0]);
        cout<<dm<<endl;
    }
}
