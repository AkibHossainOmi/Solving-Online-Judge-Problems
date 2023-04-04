#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2==0) cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            ll p1=1, r=n/2, p2=2*n-r+1;
            while(r--)
            {
                cout<<p1<<" "<<p2<<endl;
                p1++, p2++;
            }
            r=n/2+1, p1=r, p2=n+1;
            while(r--)
            {
                cout<<p1<<" "<<p2<<endl;
                p1++, p2++;
            }
        }
    }
}