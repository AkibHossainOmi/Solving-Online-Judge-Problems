#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,t;
    scanf("%lld",&t);
    while(t!=0)
    {
        scanf("%lld",&n);
        printf("%lld\n",n/2+1);
        t--;
    }
}
