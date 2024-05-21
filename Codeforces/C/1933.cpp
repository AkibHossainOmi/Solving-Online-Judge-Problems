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
    ll a, b, l;
    cin>>a>>b>>l;
    ll i=0, res=0;
    unordered_map<ll,ll> present;
    while(pow(a,i)<=l)
    {
        ll j=0;
        while(pow(b,j)<=l)
        {
            if(l%(ll)(pow(a,i)*pow(b,j))==0&&!present[l/(ll)(pow(a,i)*pow(b,j))]) 
            {
                res++;
                present[l/(ll)(pow(a,i)*pow(b,j))] = 1;
            }
            j++;
        }
        i++;
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