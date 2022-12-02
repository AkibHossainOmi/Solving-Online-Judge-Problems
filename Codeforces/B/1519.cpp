#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int a,b,k;
        cin>>a>>b>>k;
        if(max(a,b)-1+max(a,b)*(min(a,b)-1)==k) cout<<"YES\n";
        else cout<<"NO\n";
    }
}


