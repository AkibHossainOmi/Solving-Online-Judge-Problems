#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {

	ll t;
	cin>>t;
	while(t--)
	{
	    ll n, o=0, l=0;
	    cin>>n;
	    ll a[n+1]={}, b[200003]={};
	    for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=n-1;i>=0;i--)
        {
            b[a[i]]++;
            if(b[a[i]]>1) break;
            l++;
        }
        cout<<n-l<<endl;

	}
	return 0;
}
