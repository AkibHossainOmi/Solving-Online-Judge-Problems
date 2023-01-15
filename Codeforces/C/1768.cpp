#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, i, check=0;
        cin>>n;
        ll a[n+1]={}, p1[2*100000+5]={}, p2[2*100000+5]={}, P[n+1]={}, Q[n+1]={};
        map<ll,ll> R1, R2, L1, L2, X, Y;
        map<ll,ll>::iterator it;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            p1[a[i]]++;
            if(p1[a[i]]==1) R1[a[i]]=i, P[i]=a[i];
            else R2[a[i]]=i, p2[a[i]]++, Q[i]=a[i];
        }
        ll j=0, k=0;
        for(i=1;i<=n;i++)
        {
            if(p1[i]==0) L1[j]=i, j++;
            if(p2[i]==0) L2[k]=i, k++;
        }
        k=0, j=0;
        for(it=R1.begin();it!=R1.end();it++)
        {
            Q[it->second]=L2[k], k++;
        }
        for(it=R2.begin();it!=R2.end();it++)
        {
            P[it->second]=L1[j], j++;
        }
        for(i=1;i<=n;i++)
        {
            if(max(P[i],Q[i])!=a[i]||min(P[i],Q[i])==0) 
            {
                check=-1;
                break;
            }
        }
        if(check==-1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            for(i=1;i<=n;i++)
            {
                cout<<P[i]<<" ";
            }
            cout<<endl;
            for(i=1;i<=n;i++)
            {
                cout<<Q[i]<<" ";
            }
            cout<<endl;
        }
    }
}