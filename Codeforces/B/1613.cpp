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
        ll a[n], i, j;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=1; i<=n/2; i++)
        {
            cout<<a[i]<<" "<<a[0]<<endl;
        }
	}
	return 0;
}