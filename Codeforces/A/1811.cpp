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
        ll n, f=0;
        char c;
        string s;
        cin>>n>>c>>s;
        for(ll i=0; i<n; i++)
        {
            if(c>s[i]&&f==0) 
            {
                f=1;
                cout<<c;
            }
            cout<<s[i];
        }
        if(f==0) cout<<c;
        cout<<endl;
    }
}        