#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n, x=0, opt=0;
        cin>>n;
        vector<ll> a(n), b;
        for(ll i=0; i<n; i++) 
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll L=0, R=n-1;
        while(L<=R)
        {
            x+=a[L];
            if(L<R)
            {
                if(x>a[R])
                {
                    opt+=a[R]+1;
                    a[L]=x-a[R];
                    x=0;
                    R--;
                }
                else L++;
            }
            else
            {
                if(x>1) opt+=ceil(x/2.0)+1;
                else opt++;
                x=0;
                L++;
                R--;
            }
        }
        cout<<opt<<endl;
    }
}