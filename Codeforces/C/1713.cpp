#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll r=sqrt(n);
        if(r*r!=n) r++;
        list<ll> p;
        map<ll,ll> check;
        for(ll i=n-1; i>=0; i--)
        {
            if(r*r-i>n-1) r--, n=i+1;
            while(check[r*r-i]==1) r--;
            p.push_front(r*r-i), check[r*r-i]++;
        }
        for(auto i=p.begin(); i!=p.end(); i++) cout<<*i<<" "; 
        cout<<endl;
    }
}
