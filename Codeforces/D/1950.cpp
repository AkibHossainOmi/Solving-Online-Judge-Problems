#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds; 
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

ll DecToBin(ll number)
{
    ll n = (int)(log2(number));
    ll num = stoi(bitset<64>(number).to_string().substr(64 - n - 1));
    return num;
}
bool isBin(ll n) 
{
    while (n > 0) {
        int digit = n % 10;
        if (digit != 0 && digit != 1)
            return false;
        n /= 10;
    }
    return true;
}
unordered_map<ll,bool> answer;
vector<ll> bin;
void sol()
{
    ll n;
    cin>>n;
    if(answer[n]) cout<<"YES\n";
    else cout<<"NO\n";
}
ll numberOfDigits(ll number) {
    string numberString = to_string(number);
    return numberString.length();
}
int main()
{
    FastIO;
    ll t=1;
    cin>>t;
    for(ll i=1; i<=32; i++)
    {
        ll x = DecToBin(i);
        answer[x] = true;
        bin.push_back(x);
    }
    for(ll i=1; i<bin.size(); i++)
    {
        for(ll j=i; j<bin.size(); j++)
        {
            if(numberOfDigits(bin[i]*bin[j])<=6)
            {
                bin.push_back(bin[i]*bin[j]);
                answer[bin[i]*bin[j]] = true; 
            }
        }
    }
    while(t--)
    {
        sol();
    }
}
