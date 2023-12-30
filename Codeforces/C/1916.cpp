#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

long long gcd(long long int a, long long int b) 
{ 
  if (b == 0) 
    return a; 
  return gcd(b, a % b); 
} 

long long lcm(int a, int b) 
{ 
    return (a / gcd(a, b)) * b; 
} 

int main()
{
    FastIO;
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin>>a[i];
        ll s=0, left=0, o=0, save=0;
        for(ll i=0; i<n; i++)
        {
            if(a[i]%2!=0) o++;
            save=(o/3)*2;
            if(o%3==2) save+=2;
            left=o-save;
            s+=a[i];
            if(i>0) cout<<s-left<<" ";
            else cout<<s<<" ";
        }
        cout<<endl;
    }
}
