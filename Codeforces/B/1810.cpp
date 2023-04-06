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
        ll n, r=1, c=0;
        cin>>n;
        vector<ll> a;
        while(n!=1)
        {
            if(n%2==0) 
            {
                r=0;
                break;
            }
            else
            {
                if(((n+1)/2)%2!=0) n=(n+1)/2, a.push_back(1);
                else n=(n-1)/2, a.push_back(2);
                c++;
            }
            
        }
        if(r==1&&c<=40) 
        {
            cout<<a.size()<<endl;
            for(ll i=a.size()-1; i>=0; i--) cout<<a[i]<<" ";
        }
        else cout<<"-1";
        cout<<endl;
    }
}        