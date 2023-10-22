#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main() 
{
    FastIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll len, k, count = 0;
        cin>>len>>k;
        string s;
        map<char,ll> attendance;
        cin>>s;
        for(ll i=0; i<s.size(); i++)
        {
            attendance[s[i]]++;   
        }
        for(auto i=attendance.begin(); i!=attendance.end(); i++)
        {
            if(i->second%2!=0) count++;
        }
        if(count>0) count--;
        if(k>=count&&k<=len-1) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
