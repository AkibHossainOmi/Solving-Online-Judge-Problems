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

        ll a[n], c[4050]={}, y=0, x, r;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=pow(2,11)) c[a[i]]++;
        }

        for(ll i=1;i<=2048;i*=2)
        {
            if(c[i]>=2048/i) 
            {
                y=1;
                break;
            }
            else
            {
                while(c[i]>=2)
                {
                    x=log2((float)c[i]), r=pow(2,x);
                    c[i*r]++, c[i]-=r;
                }
            }
        }
        if(y==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
	return 0;
}