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
        ll n, k;
        cin>>n>>k;
        string s;
        for(ll i=0; i<k; i++) s+=('a'+i);
        ll i=0;
        while(i<n*k)
        {
            for(ll j=0; j<s.size(); j++)
            {
                cout<<s[j];
                i++;
            }
        }
        cout<<endl;
    }
}