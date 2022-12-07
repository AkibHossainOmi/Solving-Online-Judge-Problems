#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n, x, f;
        cin>>n>>x>>f;
        ll c=f/x;
        if(c>=n-1) c=n-1;
        cout<<c*(n-c)+(c*(c-1))/2<<endl;     
    }
}
