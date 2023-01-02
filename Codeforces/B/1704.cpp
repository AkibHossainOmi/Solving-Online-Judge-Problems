#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
        ll n, x;
        cin>>n>>x;
        ll a[n], vmax, vmin, v1, v2, c=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            vmax=a[i]+x, vmin=a[i]-x;
            if(i==0) v1=vmax, v2=vmin;
            if(i>0)
            {
                if((vmin>v1||vmax<v1)&&(vmin>v2||vmax<v2)) c++;
                if(vmin>v1||vmax<v1) v1=vmax;
                if(vmin>v2||vmax<v2) v2=vmin;
            }
        }
        cout<<c<<endl;
	}
	return 0;
}