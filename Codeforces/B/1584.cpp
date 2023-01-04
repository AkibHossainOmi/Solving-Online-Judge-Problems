#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, m;
        cin>>n>>m;
        cout<<(m*n-(m%3)*(n%3))/3+((m%3)*(n%3))/2+((m%3)*(n%3))%2<<endl;
    }
}
