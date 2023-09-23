#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

ll n=40000;
bool prime[40000 + 1];
vector<ll> all;

void Sieve(int n)
{
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    {
        if(prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p) prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++) if(prime[p]) all.push_back(p);
}
int main()
{
    FastIO;
    Sieve(n);
    ll t=1;
    cin>>t;
    while(t--)
    {
        cout<<all.size()<<endl;
        // ll x;
        // cin>>x;
        // while(x!=1)
        // {
            
        // }
    }
}