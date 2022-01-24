#include <stdio.h>
#define ll long long int
int main()
{
    ll n,r,b,x,y;
    scanf("%lld %lld %lld",&n,&b,&r);
    x=b*(n/(b+r));
    y=n%(b+r);
    if(y<=b) printf("%lld\n",x+y);
    else printf("%lld\n",x+b);
    return 0;
}
