#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 

using namespace std;
using namespace __gnu_pbds;

#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

ll calculateProfit(ll n, ll a, ll b, ll k) {
    ll sum_first_k = k * (2 * b - k + 1) / 2;
    ll profit = sum_first_k + (n - k) * a;
    return profit;
}

ll findMaxProfit(ll n, ll a, ll b) {
    ll left = 0, right = min(n, b);
    ll max_profit = n * a;
    
    while (left <= right) {
        ll mid = left + (right - left) / 2;
        
        ll profit_mid = calculateProfit(n, a, b, mid);
        max_profit = max(max_profit, profit_mid);
        
        if (mid > 0) {
            ll profit_left = calculateProfit(n, a, b, mid - 1);
            if (profit_mid > profit_left) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        } else {
            left = mid + 1;
        }
    }
    
    return max_profit;
}

int main() {
    FastIO;
    int t;
    cin >> t;
    
    while (t--) {
        ll n, a, b;
        cin >> n >> a >> b;
        
        ll result = findMaxProfit(n, a, b);
        
        cout << result << "\n";
    }
    
    return 0;
}
