#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds; 
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

ll sol()
{
    ll n, res = 0;
    cin>>n;
    if(n>=20)
    {
        res+=2;
        n-=20;
        ll rem = n;
        res+=rem/15;
        rem%=15;
        res+=rem/6;
        rem%=6;
        res+=rem/3;
        rem%=3;
        res+=rem;
    }
    else if(n>=24)
    {
        res+=4;
        n-=24;
        ll rem = n;
        res+=rem/15;
        rem%=15;
        res+=rem/10;
        rem%=10;
        res+=rem/6;
        rem%=6;
        res+=rem/3;
        rem%=3;
        res+=rem;
    }
    else if(n/3>1)
    {
        res+=1;
        n-=3;
    }
    else if(n>2)
    {
        res+=
    }
    
    return res;
}

int main()
{
    FastIO;
    ll t=1;
    cin>>t;
    vector<ll> a;
    while(t--)
    {
        a.push_back(sol());
    }
    for(ll i=0; i<a.size(); i++)
    {
        cout<<a[i]<<endl;
    }
}