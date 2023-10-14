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
        ll a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[2]%a[0]==0&&a[1]%a[0]==0)
        {
            ll count = a[2]/a[0]-1 + a[1]/a[0]-1;
            if(count<=3) cout<<"YES\n";
            else cout<<"NO\n";
        } 
        else cout<<"NO\n";      
    }

    return 0;
}
