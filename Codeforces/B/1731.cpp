#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    double t;
    cin>>t;
    while(t--)
    {
        ll n, s, y=1000000007;
        cin>>n;
        s=((((n*(n+1))%y)*((337*((4*n-1)%y))%y)))%y;
        cout<<s<<endl;
    }
}