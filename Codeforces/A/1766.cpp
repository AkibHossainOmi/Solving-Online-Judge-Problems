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
        if(n<=10) cout<<n<<endl;
        else
        {
            ll i=10, p=log10(n), x=pow(10,p), r=n/x;
            cout<<(r-1)+(p-1)*9+10<<endl;
        }
    }
}
