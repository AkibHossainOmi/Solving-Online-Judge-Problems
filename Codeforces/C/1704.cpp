#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll total_house, infected_house;
        cin>>total_house>>infected_house;
        ll a[infected_house], distance[infected_house];
        for(ll i=0; i<infected_house; i++) cin>>a[i];
        sort(a,a+infected_house);
        for(ll i=1; i<=infected_house; i++)
        {
            if(i!=infected_house) distance[i-1]=a[i]-a[i-1]-1;
            else distance[i-1]=(total_house+a[0])-a[i-1]-1;
        }
        sort(distance,distance+infected_house,greater<ll>());
        ll deleted=0, safe=0;
        for(ll i=0; i<infected_house; i++)
        {
            distance[i]-=deleted;
            if(distance[i]>=2)
            {
                distance[i]--;
                deleted+=4;
            }
            else if(distance[i]==1)
            {
                deleted+=2;
            }
        }
        for(ll i=0; i<infected_house; i++) if(distance[i]>0) safe+=distance[i];
        cout<<total_house-safe<<endl;
    }
}