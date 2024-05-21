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
    ll n, mini, count = 0;
    cin>>n;
    vector<ll> a(n);
    string res = "NO\n";
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        if(i==0) mini = a[0];
        else mini = min(mini,a[i]);
    }
    for(ll i=0; i<n; i++) if(a[i]==mini) count++;
    if(count>1)
    {
        for(ll i=0; i<n; i++)
        {
            if(a[i]%mini!=0)
            {
                res = "YES\n";
                break;
            }
        }
    }
    else res = "YES\n";
    cout<<res;
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