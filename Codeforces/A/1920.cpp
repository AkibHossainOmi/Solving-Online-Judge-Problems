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
        ll n;
        cin >> n;
        ll min_val = 1, max_val = 1e9, not_equal = 0;
        vector<pair<ll,ll>> constraints;
        ll a, x;
        for (ll i = 0; i < n; i++) 
        {
            cin >> a >> x;
            constraints.push_back({a,x});
        }
        sort(constraints.begin(), constraints.end());
        for (ll i = 0; i < n; ++i) 
        {
            a = constraints[i].first, x = constraints[i].second;
            if (a == 1) min_val = max(min_val, x);
            else if (a == 2) max_val = min(max_val, x);
            else if(x >= min_val && x <= max_val) not_equal++;
        }
        ll result = max((ll)0, max_val - min_val + 1 - not_equal);
        cout << result << endl;
    }
}