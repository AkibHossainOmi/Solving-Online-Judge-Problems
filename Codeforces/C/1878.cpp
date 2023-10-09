#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

bool canChooseKDistinctIntegers(ll n, ll k, ll x) 
{
    return !(k > n || k * (k + 1) / 2 > x || k * (2 * n - k + 1) / 2 < x);
}

int main() 
{
    FastIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k, x;
        cin>>n>>k>>x;
        if (canChooseKDistinctIntegers(n, k, x)) 
        {
            cout << "Yes\n";
        } 
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
