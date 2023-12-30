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
    ll y=2023;
    while(t--)
    {
        ll a, b;
        cin>>a>>b;
        if(a==1) cout<<b*b<<endl;
        else if(lcm(a,b)==b) cout<<b*(b/a)<<endl;
        else cout<<lcm(a,b)<<endl;
    }
}
