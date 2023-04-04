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
        ll n;
        cin>>n;
        ll a[n], result, new_result;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            if(i==0) result=a[i];
            else result=result^a[i];
        }
        for(ll i=0; i<n; i++)
        {
            a[i]=a[i]^result;
            if(i==0) new_result=a[i];
            else new_result=a[i]^new_result;
        }
        if(new_result==0) cout<<result<<endl;
        else cout<<"-1\n";
    }
}