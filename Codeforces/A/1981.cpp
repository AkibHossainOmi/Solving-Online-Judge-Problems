#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds; 
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

int main()
{
    FastIO;
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll l, r;
        cin>>l>>r;
        ll res = log2(r);
        cout<<res<<endl;
    }
}