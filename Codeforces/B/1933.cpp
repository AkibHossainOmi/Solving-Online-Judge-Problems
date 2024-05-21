#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds; 
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

void sol()
{
    ll n, s=0, res = 0;
    cin>>n;
    vector<ll> a(n);
    map<ll,ll> present;
    for(auto i=0; i<n; i++) 
    {
        cin>>a[i];
        a[i]%=3, s+=a[i];
        present[a[i]] = 1;
    }
    if(s%3!=0)
    {
        if(present[s%3]) res = 1;
        else res = min(n, 3-s%3);
    }
    cout<<res<<endl;
}

int main()
{
    FastIO;
    ll t=1;
    cin>>t;
    while(t--)
    {
        sol();
    }
}
