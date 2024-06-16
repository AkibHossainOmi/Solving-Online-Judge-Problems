#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds; 

#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

int main()
{
    FastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> pages(n);
        ll res = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> pages[i];
        }
        for (ll i = 0; i < n-1; i++)
        {
            res = max(res,pages[i]+pages[n-1]);
        }
        cout<<res<<endl;
    }
    return 0;
}