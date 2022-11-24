#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t, a, b, c;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        printf("%lld %lld %lld\n",a+b+c,b+c,c);
    }
    return 0;
}
