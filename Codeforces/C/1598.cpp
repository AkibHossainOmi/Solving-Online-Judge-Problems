#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, c=0;
        cin>>n;
        double a[n], s=0, Avg, NewSum, Dorkar;
        map<double,ll> Koyta;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            Koyta[a[i]]++;
            s+=a[i];
        }
        Avg=s/n;
        NewSum=s-Avg*(n-2);
        for(ll i=0; i<n; i++)
        {
            Dorkar=NewSum-a[i];
            if(Dorkar!=a[i])
            {
                if(Koyta[Dorkar]!=0) c+=Koyta[Dorkar], Koyta[a[i]]--;
            }
            else 
            {
                if(Koyta[Dorkar]>1) c+=Koyta[Dorkar]-1, Koyta[Dorkar]--;
            }
        }
        cout<<c<<endl;
    }
}
