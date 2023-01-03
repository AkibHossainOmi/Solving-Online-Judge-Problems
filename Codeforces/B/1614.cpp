#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
        ll n, x, c=1, i, r=0, p=0;
        cin>>n;
        ll b[n+2];
        b[0]=0;
        multimap<ll,ll> a;
        multimap<ll,ll>::reverse_iterator it;
        for(i=0;i<n;i++)
        {
            cin>>x;
            a.insert(pair<ll,ll>(x,i+1));
        }
        i=1;
        for(it=a.rbegin();it!=a.rend();it++)
        {
            r+=c*2*it->first;
            if(i%2==0) b[it->second]=p-c;
            else b[it->second]=p+c;
            if(i%2==0) c++; 
            i++;
        }
        cout<<r<<endl;
        for(i=0;i<=n;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}